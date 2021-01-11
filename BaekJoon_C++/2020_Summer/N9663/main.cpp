//
//  main.cpp
//  N9663
//
//  Created by James Choi on 2020/07/28.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
using namespace std;
#define MAX 16

int N;
int cnt=0; // N개의 퀸을 놓을 수 있는 총 방법의 개수
int queen = 1; //찾은 퀸의 개수
int row[MAX]; //2차원 배열 대신 1차원 배열을 사용해서 퀸을 자리를 1~N까지 숫자로 표기


bool isPromising(int i){ //해당 자리에 퀸을 놓아도 되는지 검사
    for(int j=1; j<=queen; j++){
        if(row[j] == i || abs(queen-j) == abs(i-row[j]))
            return false;
    }
    return true;
}
void n_queen(){
    //총 N개의 퀸의 자리를 다 찾았을때 cnt증가
    //N+1인 이유는 인덱스가 1부터 시작해서
    //퀸도 1에서 시작하기 때문이다.
    if(queen == N+1){
        cnt++;
        return;
    }
    for(int i=1; i<=N; i++){
        if(isPromising(i)){ //return true면 해당 자리에 놓고 n_queen함수 재귀 호출
            row[queen] = i;
            queen++;
            n_queen();
            //더 확장할 수 없어 return되면 해당 자리에 퀸을 지우고
            //다시 다음 단계
            queen--;
            row[queen] = -1;
            
        }
    }
}
int main() {
    
    cin >> N;
    for(int i=1; i<=N; i++)
        row[i] = -1;
    n_queen();
    cout << cnt << "\n";
    return 0;
}
