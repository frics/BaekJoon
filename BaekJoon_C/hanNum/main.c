//
//  main.c
//  hanNum
//
//  Created by James Choi on 2020/07/09.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <stdio.h>

int han(int n){
    int prev=-1,now;
    int pre_check=10, check;
    for(;n>0; n/=10){
        if(prev == -1){
            prev = n%10;
        }else if(pre_check == 10){
            now=n%10;
            pre_check = prev - now;
            prev = now;
        }else{
            now = n%10;
            check = prev - now;
            if(pre_check != check)
                return 0;
            pre_check = check;
        }
    }
    return 1;
}
int main(){
    
    int cnt=0;

    int N;
    scanf("%d", &N);
    for(int i=1; i<=N; i++)
        cnt+=han(i);
    
    printf("%d\n", cnt);
    
}
