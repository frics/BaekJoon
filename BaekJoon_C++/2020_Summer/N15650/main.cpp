//
//  main.cpp
//  N15650
//
//  Created by James Choi on 2020/07/28.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
using namespace std;

int arr[9] = {0, };
bool visit[9];

void print(int M){
    for(int i=0; i< M; i++)
        cout << arr[i] << " ";
    cout << "\n";
}
bool promising(int i, int cnt){
    if(cnt >0 && i < arr[cnt-1])
        return false;
    return !visit[i];
}
void seq(int cnt, int N, int M){
    if(arr[M-1] != 0){
        
        print(M);
        arr[M-1] = 0;
        return;
    }
    
    for(int i = 1; i <= N; i++){
        
        if(promising(i, cnt)){
            visit[i] = true;
            arr[cnt] = i;
            seq(cnt+1, N, M);
            arr[cnt] = 0;
            visit[i] = false;
        }
    }
    
}


int main() {
    int N, M;
    
    cin >> N >> M;
    
    seq(0, N, M);
    return 0;
}
