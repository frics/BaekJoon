//
//  main.c
//  N2908
//
//  Created by James Choi on 2020/07/09.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <stdio.h>

int main(){
    char A[4], B[4];
    scanf("%s", A);
    scanf("%s", B);
   
    char tmp = A[2];
    A[2] = A[0];
    A[0] = tmp;
    tmp = B[2];
    B[2] = B[0];
    B[0] = tmp;
    for(int i=0; i<3; i++){
        if(A[i]<B[i]){
            printf("%s\n", B);
            break;
        }else if(A[i] == B[i])
            continue;
        else{
            printf("%s\n", A);
            break;
        }
    }
    
}
