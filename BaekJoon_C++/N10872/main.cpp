//
//  main.cpp
//  N10872
//
//  Created by James Choi on 2020/07/21.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
using namespace std;

int fac(int N){
    if(N>0)
        return N*fac(N-1);
    else
        return 1;
}

int main() {
    int N;
    cin >> N;
    cout << fac(N);
}
