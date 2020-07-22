//
//  main.cpp
//  N1436
//
//  Created by James Choi on 2020/07/22.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;
int get_name(int N){
    int cnt =0;
    int number = 666;
    while(1){
        //number를 string 타입으로 변환
        string name = to_string(number);
        //string 타입으로 변환한 number에서 666이 포함되어 있는지 확인
        if(name.find("666") != string::npos)
            cnt++;
        if(cnt == N)
            break;
        number++;
    }
    return number;
}

int main(){
    int N;
    cin >> N;
    int name = get_name(N);
    cout << name << "\n";
    
}
