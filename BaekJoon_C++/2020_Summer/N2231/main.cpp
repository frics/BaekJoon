//
//  main.cpp
//  N2231
//
//  Created by James Choi on 2020/07/22.
//  Copyright © 2020 James Choi. All rights reserved.
//
//  https://www.acmicpc.net/problem/2231
//  분배합 문제

#include <iostream>
#include <cmath>
using namespace std;

int find_const(int N){
    int length =0;
    for(int check = N ;check>0; length++){
        check = check/10;
    }
    int sum = N;
    int tmp = N;
    for(int i=length-1; i>=0; i--){
        sum += tmp/(int)pow(10,i);
        tmp = tmp%(int)pow(10,i);
    }
    return sum;
}
int main(){
    int N;
    int result = 0;
    cin >> N;
   // find_const(198);
    for(int i=1; i<N; i++){
        int tmp = find_const(i);
        if(N == tmp){
            result = i;
            break;
        }
    }
   
    cout << result << "\n";
    
}
