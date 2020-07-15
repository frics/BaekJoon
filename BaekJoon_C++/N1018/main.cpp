//
//  main.cpp
//  N1018
//
//  Created by James Choi on 2020/07/15.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
using namespace std;

char chess[50][50];
char white_first[8][8] =
{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'};
char black_first[8][8] =
{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'};



void getChess(int N, int M){
    int minimum =125;
    int white_cnt=0, black_cnt=0;
    for(int row=0, i=8-1; i<N; row++, i++ ){ //행 8칸씩 자르기, -1은 M=N=8일때를 위해서
        for(int column=0, j=8-1; j<M; column++, j++){ //열 8칸씩 자르기
            
            for(int pivot_row =0, k=row; k<=i; k++, pivot_row++){ //세로 탐색 row~i까지
                for(int pivot_col = 0, l=column; l<=j; l++, pivot_col++){ // 가로 탐색 l,pivot을 따로 증가 시키는 이유는 초기값이 다르기 때문
                    if(chess[k][l] != white_first[pivot_row][pivot_col])//white first 카운트
                        white_cnt++;
                    if(chess[k][l] != black_first[pivot_row][pivot_col])//black first 카운트
                        black_cnt++;
                }
            }
            minimum = min(min(white_cnt, black_cnt), minimum); //두 종류의 체스판에서의 cnt중 더 작은것과 minimum값을 비교해서 더 작은 값 입력
            white_cnt =0;
            black_cnt =0;
        }
        
    }
    cout << minimum << "\n";
}


int main() {
    int M, N;
    cin >> N >> M;
    
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> chess[i][j];
        }
    }
    getChess(N, M);
    
    
}

