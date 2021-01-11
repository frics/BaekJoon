//
//  main.cpp
//  N10870
//
//  Created by James Choi on 2020/07/21.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
using namespace std;

int fibo(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int N;
    int result;
    cin >> N;
    result = fibo(N);
    cout << result << "\n";
}
