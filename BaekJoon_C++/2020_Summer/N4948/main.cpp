//
//  main.cpp
//  N4948
//
//  Created by James Choi on 2020/07/16.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
using namespace std;

int prime[246911];

int getPrime(int N) {
    int cnt=0;
    for(int i=2;i<=2*N;i++) //2~N까지 숫자 배열에 초기화
        prime[i] = i;
    //2부터 소수를 지움
    for(int i=2;i<=2*N;i++) {
        if(prime[i]==0) // 지워진 !소수 넘어감
            continue;
        for(int j=2*i; j<=2*N; j+=i) { //에라스토테네스의 체 원리 적용 각 수의 배수들을 지워나감
            prime[j] = 0;            //시간을 효과적으로 줄일 수 있다.
        }
    }
    for(int i=N+1; i<=2*N; i++){
        if(prime[i]!=0)
            cnt++;
    }
    return cnt;
}

int main(){
    int n;
    int result;
    while(1){
        cin >> n;
        if(n==0)
            break;
        result = getPrime(n);
        printf("%d\n", result);
    }
    
       
}
