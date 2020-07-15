//
//  main.cpp
//  N2580
//
//  Created by James Choi on 2020/07/15.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
using namespace std;

int sudoku[9][9];
int cnt_zero = 0;

void printSudoku(){
    printf("\n\n\n");
   
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++)
                cout << sudoku[i][j] <<" " ;
        cout << "\n";
    }
}

int promising(int row, int column, int pivot){
    int rowToCheck = (row/3)*3;
    int colToCheck = (column/3)*3;
    //해당 인덱스를 포함한 3*3 블럭 검색
    for(int i=rowToCheck; i<rowToCheck+3; i++){
        for(int j=colToCheck; j<colToCheck+3; j++){
            if(sudoku[i][j] == pivot)
                return 0;
        }
    }
    //해당 인덱스를 포함한 행 검색
    for(int j=0; j<9; j++){
        if(sudoku[row][j] == pivot) //비워진 원소가 있는 행을 탐색해서
            return 0;               //pivot num과 같은 숫자가 있으면 그 숫자는 못들어감
    }
    //해당 인덱스를 포함한 열 검색
    for(int i=0; i<9; i++){
        if(sudoku[i][column] == pivot) //비워진 원소가 있는 행을 탐색해서
            return 0;                      //pivot num과 같은 숫자가 있으면 그 숫자는 못들어감
    }
    
    return 1;
}
int makeSudoku(){
    for(int i=0; i<9; i++){ //행 탐색
        for(int j=0; j<9; j++){ //열 탐색
            if(sudoku[i][j] == 0){
                for(int pivot=1; pivot<=9; pivot++){
                    if(promising(i, j, pivot) == 1){
                        sudoku[i][j] = pivot;
                        cnt_zero--;
                        
                        if(makeSudoku() ==1){ //makeSudoku 함수를 한번 더 호출하면 i,j번째 다음꺼부터 탐색함
                            if(cnt_zero==0)//모든 0이 다 채워졌으면 끝남
                                return 0;
                            sudoku[i][j] = 0; //호출한 makeSudoku함수에서 탈출한거면 해당 루트가 유망하지 않은거임
                            cnt_zero++;
                        }
                    }
                }
                return 1; // 맞는게 없으면 백트래킹
            }
        }
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin >> sudoku[i][j];
            if(sudoku[i][j]==0)
                cnt_zero++;
        }
    }
    makeSudoku();
    printSudoku();
    
}
