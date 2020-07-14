//
//  main.cpp
//  N1011
//
//  Created by James Choi on 2020/07/14.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
using namespace std;

int getCount(int x, int y){
    
    if(y-x ==1)
        return 1;
    else if(y-x ==2)
        return 2;
    else{
        int cnt = 2, i;
        int len = y-x-2;
        int mid;
        if(len/2 >0)
            mid = len/2+1;
        else
            mid= 1;
        for(i=1;mid>0; i++){
            mid-=i;
        }
        if(mid==0)
            cnt += i*2;
        if(mid<0)
            cnt += i*2-1;
            
        
        return cnt;
    }
    
}
int main() {
    int T, x, y;
    cin >> T;
    
    for(int i=0; i<T; i++){
        cin >> x >> y;
        cout << getCount(x, y);
    }
}
