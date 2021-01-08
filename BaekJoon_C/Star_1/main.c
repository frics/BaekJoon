//
//  main.c
//  BeakJoon
//
//  Created by James Choi on 2020/07/06.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    for(int i=0; i < N; i++){
        for(int j=0; j<i; j++)
            printf(" ");
        for(int j=0; j<2*N-2*i-1; j++)
            printf("*");
        printf("\n");
    }
    for(int i=1; i < N; i++){
        for(int j=N-1; j>i; j--)
            printf(" ");
        for(int j=0; j<2*i+1; j++)
            printf("*");
        printf("\n");
    }
}
