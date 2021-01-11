//
//  main.cpp
//  N1978
//
//  Created by James Choi on 2020/07/16.
//  Copyright © 2020 James Choi. All rights reserved.
//


#include <iostream>
using namespace std;

bool isPrime(int prime){
    for(int j=2; j<prime; j++){
        if(prime%j == 0)
            return false;
    }
    return true;
}
int main() {
    int N;
    int cnt=0;
    cin >> N;
    for(int i=0; i<N; i++){
        int prime;
        cin >> prime;
        if(isPrime(prime) && prime!=1)
            cnt++;
    }
    cout << cnt << "\n";
}
