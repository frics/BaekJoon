//
//  main.cpp
//  N15903
//
//  Created by James Choi on 2021/01/11.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, M;
    long long action;
    int min = 1001;
    cin >> N >> M;

    long long *card = new long long[N];

    for(int i=0; i<N; i++)
        cin >> card[i];
        
    for(int i=0; i<M; i++){
        sort(card, card+N);
        action = card[0] + card[1];
        card[0] = action;
        card[1] = action;
    }
    long long sum=0;
    for(int i=0; i<N; i++){
        sum += card[i];
    }
    printf("%lld\n", sum);
    return 0;
}
