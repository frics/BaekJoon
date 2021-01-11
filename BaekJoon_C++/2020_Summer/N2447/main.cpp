//
//  main.cpp
//  N2447
//
//  Created by James Choi on 2020/07/21.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>

using namespace std;
//별을 입력할 배열 선언
char star[6561][6561];

//함수 선언부
void init_star(int N);
void make_void(int row, int col, int N);
void draw_star(int row, int col, int N);
void print_star(int N);

void init_star(int N){
    //배열 전체 *으로 초기화
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++)
            star[i][j] = '*';
    }
}
void make_void(int row, int col, int N){ //공백을 생성
    for(int i=row;i<row+N/3; i++){
        for(int j= col;j<col+N/3; j++)
            star[i][j] = ' ';
    }
}

void draw_star(int row , int col, int N){
    for(int i=row; i < row+N; i+=(N/3)){
        for(int j=col; j < col+N; j+=(N/3)){
            if(i == row+N/3 && j == col + N/3)
                make_void(i,j,N);
            else if(N>3) //N의 최소값이 3이기 때문에 그전까지 재귀 호출
                draw_star(i,j,N/3);
        }
    }
}

void print_star(int N){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++)
            cout << star[i][j];
        cout << "\n";
    }
}
int main() {
    int N;
    cin >> N;
    init_star(N);
    draw_star(0, 0, N);
    print_star(N);
}
