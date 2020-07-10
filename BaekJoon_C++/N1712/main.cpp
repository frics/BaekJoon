//
//  main.cpp
//  N1712
//
//  Created by James Choi on 2020/07/10.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    long long A, B, C; //A가 고정비, B가 변동비, C가 노트북 가격
    long long BEP; // 손익 분기점 저장
  
    cin >> A >> B >> C;
    if(C>B){
        BEP = A/(C-B); //손익 분기점에 가장 근사치를 구한다
        if(C*BEP <= A+B*BEP) //같거나 조금 모자라는것을 확인하여 더하여 준다.
            BEP++;
    }else //C<=B 이렇게 되면 아무리 생각을 해도 이익이 나지 않으므로 제외한다.
        BEP = -1;
    cout << BEP << "\n";

}
