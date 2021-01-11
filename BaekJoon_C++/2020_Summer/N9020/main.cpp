//
//  main.cpp
//  N9020
//
//  Created by James Choi on 2020/07/16.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
#define size 10001
using namespace std;


int prime[size]={0, }; //소수인 인덱스만 0 아니면 1

void getPrime() {
    prime[1] =1; //1은 소수가 아님
    for(int i=2;i<=size;i++) {
        if(prime[i] ==1) // 1이 들어가 있으면 소수가 아님
            continue;
        for(int j=2*i; j<=size; j+=i) { //에라스토테네스의 체 원리 적용 각 수의 배수들을 지워나감
            prime[j] = 1;            //시간을 효과적으로 줄일 수 있다.
        }
    }
}
void getGBP(int N){
   
    int middle = N/2;
    int front, back;

    for(front = back = middle; front<=N; front--, back++){
        if(prime[front] == 0 && prime[back] ==0){
            cout << front << " " << back << "\n";
            return;
        }
    }
}
int main(){
    int T;
    int N;
    cin >> T;
    getPrime();
    while(T-->0){
        cin >> N;
        getGBP(N);
    }
}
