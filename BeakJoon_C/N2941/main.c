//
//  main.c
//  N2941
//
//  Created by James Choi on 2020/07/09.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(){
    int cnt=0;
    char cro[8][4] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    char word[101];
    scanf("%s", word);
    for(int i=0; word[i] !='\0'; i++){
        for(int j=0; j<8; j++){
            if(word[i] == 'd' && word[i+1] =='z'){
                if(word[i+2]=='='){
                    i+=2;
                    break;
                }else{
                    break;
                }
            }
            else if(word[i] == cro[j][0] && word[i+1]==cro[j][1]){
                i++;
                break;
            }
        }
        cnt++;
    }
    printf("%d\n", cnt);
}
