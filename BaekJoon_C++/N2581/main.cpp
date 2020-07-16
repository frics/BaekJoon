//
//  main.cpp
//  N2581
//
//  Created by James Choi on 2020/07/16.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
using namespace std;
int sum = 0;
int minimum = -1;
void isPrime(int M, int N){
    int first=1;
    for(int i=M; i<=N; i++){
        int flag=0;
        for(int j=2; j<i; j++){
            if(i%j == 0)
                flag = 1;
        }
        if(flag ==0 && i!=1){
            if(first ==1)
                minimum = i;
            sum+=i;
            first++;
        }
    }
    
}
int main(int argc, const char * argv[]) {
    int M, N;
    cin >> M >> N;
    
    isPrime(M, N);
    if(sum==0)
        cout << -1 << "\n";
    else
        cout << sum << "\n" << minimum;
    
}
