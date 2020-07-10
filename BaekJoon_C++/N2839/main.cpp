//
//  main.cpp
//  N2839
//
//  Created by James Choi on 2020/07/10.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
using namespace std;

int getBag(int N){
    int Three=0, Five=0;
    /*먼저 가장 큰 5로 나누어 최대한 적은 봉지를 챙기게*/
    Five = N/5;
    N -= Five*5;
    if(N==0) //딱 나누어 떨어지면 바로 개수 리턴
        return Five;
    if(N%3==0){ //남은 N이 3으로 나누어 떨어질때
        Three =N/3;
        return Five+Three;
    }else{ //N이 3으로 나누어 떨어지지 않을때
        while(Five!=0){
            Five--;//5kg봉지를 하나씩 빼가면서
            N+=5;
            if(N%3 ==0) //3으로 나누어 떨어지는 경우 확인
                return Five + N/3;
        }
        return -1; //없으면 -1 리턴
    }
 
}
int main() {
    int N;
    cin >> N;
    cout << getBag(N);
}
