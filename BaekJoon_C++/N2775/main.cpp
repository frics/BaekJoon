//
//  main.cpp
//  N2775
//
//  Created by James Choi on 2020/07/13.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
using namespace std;
/*
 아파트에 각 호 별로 거주자를 전체 구현한 배열을 생성하여 접근
 구할떄마다 14*14 배열을 다 생성하는것은 비효율적이므로
 입력받은 K,N중 더 큰값을 pivot으로 잡아서 pivot*pivot크기의 배열 생성
 */
int apartment(int K, int N){
    int KN[15][14] ={0,};
    int pivot = max(K,N);
    
    for(int i=0; i<N; i++)//0층 i호에는 i명이 거주(i는 1부터 시작)
        KN[0][i]=i+1;
    //pivot이 1일때 반복문이 돌지 않는 경우 처리
    for(int i=1; i<pivot+1; i++){
        for(int j=0; j<pivot; j++){
            int sum=0;
            for(int k=0; k<=j; k++)
                sum +=KN[i-1][k];
            KN[i][j] = sum;
        }
    }
    return KN[K][N-1];
}
int main(int argc, const char * argv[]) {

    int T, K, N;
       cin >> T;
       for(int i=0; i<T; i++){
           cin >> K >> N;
           cout << apartment(K, N) << "\n";
       }
}
