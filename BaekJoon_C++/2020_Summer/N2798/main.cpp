//
//  main.cpp
//  N2798
//
//  Created by James Choi on 2020/07/14.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
using namespace std;

int blackjack(int N, int M, int *card){
    int max =0;
    
    for(int i=0; i<N-2; i++){
        for(int j=i+1; j<N; j++){
            for(int k=j+1; k<N; k++){
                int tmp = card[i]+card[j]+card[k];
                if(max<tmp && tmp <=M){
                    max= tmp;
                }
            }
        }
    }
    return max;
}
int main() {
    int N, M;
    int card[100] = {0,};
    
    cin >> N >> M;
    
    for(int i=0; i<N; i++){
        cin >> card[i];
    }
    int max;
    max = blackjack(N, M, card);
    printf("%d\n", max);
}
