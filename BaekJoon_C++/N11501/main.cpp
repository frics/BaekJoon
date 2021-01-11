//
//  main.cpp
//  N11501
//
//  Created by James Choi on 2021/01/11.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
using namespace std;


int main() {
    int T, N;
    cin >> T;

    while(T--){
        cin >> N;
        int *day = new int[N];
        for(int i=0; i<N; i++)
            cin >> day[i];
        int max = day[N-1];
        long long profit =0;
        for(int i=N-1; i>=0; i--){
            if(max < day[i]){
                max = day[i];
            }
            else if(max > day[i]){
                profit += (long long)(max-day[i]);
            }
        }
        printf("%lld\n", profit);
    }
    return 0;
}
