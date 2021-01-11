//
//  main.cpp
//  N1929
//
//  Created by James Choi on 2020/07/16.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
using namespace std;

int prime[1000001];

void getPrime(int N) {
    for(int i=2;i<=N;i++) //M~N까지 숫자 배열에 초기화
        prime[i] = i;
     //2부터 소수를 지움
    //M부터 지울 경우 2의 배수가 그대로 남아 있으므로 2부터 실시
    for(int i=2;i<=N;i++) {
        if(prime[i]==0) // 지워진 !소수 넘어감
            continue;
        for(int j=2*i; j<=N; j+=i) { //에라스토테네스의 체 원리 적용 각 수의 배수들을 지워나감
            prime[j] = 0;            //시간을 효과적으로 줄일 수 있다.
        }
    }
}


int main() {
    int M, N;
    cin >> M >> N;
    if(M==1)
        M++;
    getPrime(N);//getPrime 함수를 통하여 1~N까지의 소수를 다 구한다.
    
    for(int i=M;i<=N;i++) {
        if(prime[i]!=0)
            printf("%d\n", prime[i]);
    }
        
}
