//
//  main.cpp
//  N14888
//
//  Created by James Choi on 2020/07/29.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
using namespace std;

struct Operator{
    char symbol;
    int cnt;
};

Operator op[4];
int num[11] = {0, };

bool isPromising(){//max값이나 min값이 갱신이 되야 해당 노드 방문하게
    
    return true;
}

void getMinMax(int N){
    
    for(int i=0; i<N; i++){
        if(
    }
}

int main(int argc, const char * argv[]) {
    int N;
    
    op[0].symbol = '+';
    op[1].symbol = '-';
    op[2].symbol = '*';
    op[3].symbol = '/';
    
    cin >> N;
    for(int i=0; i<N; i++)
        cin >> num[i];
    for(int i=0; i<4; i++)
        cin >> op[i].cnt;
    
    for(int i=0; i<4; i++)
        cout << op[i].symbol << " "<<op[i].cnt<< "\n";
        
    
    
}
