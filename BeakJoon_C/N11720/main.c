//
//  main.c
//  N11720
//
//  Created by James Choi on 2020/07/09.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>
int main(){
    int N;
    int sum=0;
    char input[100];
    scanf("%d", &N);
    
    scanf("%s", input);
    
    for(int i=0; i<N; i++){
        int tmp = input[i]-'0'; //0의 아스키 코드 값을 뺴주면 해당 정수 값을 얻을 수 있다.
        sum += tmp;
    }
    
    printf("%d\n", sum);
}

