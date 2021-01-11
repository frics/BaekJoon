//
//  main.cpp
//  N1427
//
//  Created by James Choi on 2020/07/27.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool cmp(int &n1, int &n2){
    if(n1  >n2)
        return true;
    else
        return false;
}
int main(){
    int N;
    cin >> N;
    
    int length =0;
    for(int check = N ;check>0; length++){
        check = check/10;
    }
    
    int arr[length];
    int tmp = N;
    for(int i=length-1; i>=0; i--){
        arr[i] = tmp/(int)pow(10,i);
        tmp = tmp%(int)pow(10,i);
    }
    sort(arr, arr+length, cmp);
    for(int i=0; i<length; i++)
        printf("%d", arr[i]);

}
