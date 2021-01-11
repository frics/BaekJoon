//
//  main.cpp
//  N4153
//
//  Created by James Choi on 2020/07/20.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    int tri[3];
    while(1){
        for(int i=0; i<3; i++)
            cin >> tri[i];
        //0,0,0이 입력되면 while문 종료
        if(tri[0]==0 && tri[1] == 0 && tri[2]==0)
            break;
        
        sort(tri, tri+3);// 크기 순으로 정렬해서 가장 큰 값이 마지막으로
        
        //A^2 + B^2 = C^2공식 적용
        if((pow(tri[0],2)+ pow(tri[1],2)) == pow(tri[2],2))
            printf("right\n");
        else
            printf("wrong\n");
    }
}
