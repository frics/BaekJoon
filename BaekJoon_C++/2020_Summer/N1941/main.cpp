//
//  main.cpp
//  N1941
//
//  Created by James Choi on 2020/07/15.
//  Copyright © 2020 James Choi. All rights reserved.
//

// 7공주 문제입니다
#include <iostream>
using namespace std;
#define N 5


char seat[N][N];
int num[N][N] = {1, 2, 3, 4 ,5,
                6, 7, 8, 9, 10,
                11, 12, 13, 14, 15,
                16, 17, 18, 19 ,20,
                21, 22, 23, 24, 25 };

int promising(int post_x, int post_y, int x, int y){
    if(((post_x+1 == x) && (post_y == y)) ||((post_x == x) && (post_y+1 == y)))
        return 1;
    return 0;
}

int sevenPrincess(){
    int p_cnt=0;
    int s_cnt=0;
    int y_cnt=0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(seat[i][j] == 'S'){
                s_cnt++;
                sevenPrincess();
            }
        }
    }
    return 0;
}
int main() {
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++)
            cin >> seat[i][j];
    }
    
}
