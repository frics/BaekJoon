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
    int x=1, y=1;
    int i=1;
    while(i<n){
        if((x+y)%2 ==0){
            y++;
            if(x!=1)
                x--;;
        }else{
            x++;
            if(y!=1)
                y--;
        }
        i++;
    }
    cout << x << "/" << y;
}
int main(int argc, const char * argv[]) {
    int N;
    cin >> N;
    
    find(N);
}
