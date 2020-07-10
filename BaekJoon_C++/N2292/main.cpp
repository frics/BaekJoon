//
//  main.cpp
//  N2292
//
//  Created by James Choi on 2020/07/10.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int N;
    int circle=1;
    cin >> N;
    while(N>0 && N!=1){//둘러싼 벌집에 개수가 6씩 증가한다.
        N-= 6*circle;//N에서 증가하는 6만큼 벌집을 빼줘서
        circle++; //N이 1로부터 몇번째 둘레에 존재하는지 찾는다.
    } //N이 1일 경우는 자기자신으로만 가면 되므로 예외처리를 한다.
    cout << circle;
    
}
