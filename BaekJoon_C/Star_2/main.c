//
//  main.c
//  Star_2
//
//  Created by James Choi on 2020/07/07.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    for(int i=0; i< 2*N; i++){
        if((i%2) ==0){
            for(int j=0; j<N; j++){
                if((j%2)==0)
                    printf("*");
                else
                    printf(" ");
            }
        }else{
            for(int j=0; j<N; j++){
                if((j%2)==0)
                    printf(" ");
                else
                    printf("*");
            }
        }
        printf("\n");
    }
}
