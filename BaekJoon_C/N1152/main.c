//
//  main.c
//  N1152
//
//  Created by James Choi on 2020/07/09.
//  Copyright © 2020 James Choi. All rights reserved.
//
/*
문제
영어 대소문자와 띄어쓰기만으로 이루어진 문자열이 주어진다. 이 문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오. 단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.

입력
첫 줄에 영어 대소문자와 띄어쓰기로 이루어진 문자열이 주어진다. 이 문자열의 길이는 1,000,000을 넘지 않는다. 단어는 띄어쓰기 한 개로 구분되며, 공백이 연속해서 나오는 경우는 없다. 또한 문자열의 앞과 뒤에는 공백이 있을 수도 있다.

출력
첫째 줄에 단어의 개수를 출력한다.
 */
#include <stdio.h>
#include <string.h>

int main(){
    int cnt=0;
    char word[1000000];
    scanf("%[^\n]s", word); //공백을 포함한 문자열도 받을 수 있게
    long long size = strlen(word);
    
    
    for(long long i=0; i<size; i++){
        if((word[i+1] == ' ' && i != size-1) || i== size-1 && word[i]!=' ')
            cnt++;
    }
        printf("%d\n", cnt);
    
  
}
