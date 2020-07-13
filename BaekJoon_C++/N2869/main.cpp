//
//  main.cpp
//  N2869
//
//  Created by James Choi on 2020/07/13.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int A,B,V;
    cin >> A >> B >> V;
    int result;
    if((V-B)%(A-B) == 0)
        result = (V-B)/(A-B);
    else
        result = (V-B)/(A-B)+1;
    cout << result;
}
