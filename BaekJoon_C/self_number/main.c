//
//  main.c
//  self_number
//
//  Created by James Choi on 2020/07/09.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <stdio.h>
int d(int n){
    int num = n;
    for(;n>0; n/=10)
        num+=n%10;
    return num;
}
int main(){
    int n[10000]={0,};
    
    for(int i=1; i<=10000; i++){
       if(d(i)<=10000)
        n[d(i)]++;
    }
    for(int i=1; i<10000; i++){
        if(n[i] == 0)
            printf("%d\n", i);
    }
}
