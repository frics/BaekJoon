//
//  main.cpp
//  N1085
//
//  Created by James Choi on 2020/07/16.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int pos[4][2];
    
    
    for(int i=0; i<3; i++)
        cin >> pos[i][0] >> pos[i][1];
    
    if(pos[0][0] != pos[1][0] && pos[0][0] != pos [2][0])
        pos[3][0] = pos[0][0];
    else if(pos[0][0] == pos[1][0] && pos[0][0] != pos [2][0])
        pos[3][0] = pos[2][0];
    else
        pos[3][0] = pos[1][0];
    
    if(pos[0][1] != pos[1][1] && pos[0][1] != pos [2][1])
        pos[3][1] = pos[0][1];
    else if(pos[0][1] == pos[1][1] && pos[0][1] != pos [2][1])
        pos[3][1] = pos[2][1];
    else
        pos[3][1] = pos[1][1];
    
    printf("%d %d\n", pos[3][0], pos[3][1]);
    
    
    
}
