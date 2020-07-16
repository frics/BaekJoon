//
//  main.cpp
//  N10989
//
//  Created by James Choi on 2020/07/15.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
 
    int arr[10001] ={0, }; //1~10000까지의 숫자를 카운트할 배열
    int N;
    cin >> N;
    
    for(int i=0; i<N; i++){
        int tmp;
        scanf("%d",&tmp);
        arr[tmp]++; //해당 인덱스의 값을 1 증가시켜서 카운트
    }

    for (int i = 1; i <= 10000; i++) {
        if(arr[i]>0){ //0이상 일때만 출력
            for(int j=0; j<arr[i]; j++)
                printf("%d\n", i); //해당 인덱스 번호를 출력
        }
    }
}
