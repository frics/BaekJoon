//
//  main.cpp
//  N15649
//
//  Created by James Choi on 2020/07/28.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
using namespace std;

int arr[9] = {0, };
bool visit[9];


void seq(int cnt, int N, int M){
    if(arr[M-1] != 0){
        for(int i=0; i< M; i++)
            cout << arr[i] << " ";
        cout << "\n";
        arr[M-1] = 0;
        return;
    }
    for(int i = 1; i <= N; i++){
        if(!visit[i]){
            visit[i] = true;
            arr[cnt] = i;
            seq(cnt+1, N, M);
            visit[i] = false;
        }
    }
}


int main() {
    int N, M;
    
    cin >> N >> M;
    seq(0, N, M);
    
}
