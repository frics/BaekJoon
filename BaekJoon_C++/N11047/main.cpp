//
//  main.cpp
//  N11047
//
//  Created by James Choi on 2021/01/11.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
using namespace std;


int main() {
    int N;
    long long K;
    int cnt =0;
    
    cin >> N >> K;  

    int *A = new int[N];
    
    for(int i=0; i<N; i++){
        cin >> A[i];
    }

    int cur_value = K;
   
    for(int i=N-1; i>=0; i--){
     
        if((cur_value/A[i]) > 0){
            cnt += cur_value/A[i];
            cur_value -= A[i]*(cur_value/A[i]);
        
        }
            
    }
    cout << cnt << "\n";

    return 0;
}
