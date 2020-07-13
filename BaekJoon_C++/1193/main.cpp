//
//  main.cpp
//  1193
//
//  Created by James Choi on 2020/07/10.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
using namespace std;
void find(int n){
    int x=1, y=1; //x가 분자, y가 분모
    int i=1;
    while(i<n){
        //분자+분모가 짝수일 경우 분모가 증가하는 규칙을 적용(오른쪽 이동)
        if((x+y)%2 ==0){
            y++;
            //분자가 0이 됨을 방지, x가 0이되면 지그재그
            if(x!=1)
                x--;;
        }else{
            //분자+분모가 홀수일 경우 분자가 증가하는 규칙을 적용(왼쪽 이동)
            x++;
            //분모가 0이 됨을 방지, 위와는 반대로 y가 0이되면 지그재그
            if(y!=1)
                y--;
        }
        i++;
    }
    // 무한행렬에서 지그재그로 i번째 원소를 출력
    cout << x << "/" << y;
}
int main(int argc, const char * argv[]) {
    int N;
    cin >> N;
    
    find(N);
}
