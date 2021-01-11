//
//  main.cpp
//  N11729
//
//  Created by James Choi on 2020/07/21.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int N, int from, int by, int to){
    if(N==1){
        printf("%d %d\n", from, to);
    }
    else{
        hanoi(N-1, from, to, by);
        printf("%d %d\n", from, to);
        hanoi(N-1, by, from, to);
    }
}
int main() {
    int N;
    cin >> N;
    printf("%d\n", (int)pow(2, N)-1);
    hanoi(N, 1,2,3);
    return 0;
}
