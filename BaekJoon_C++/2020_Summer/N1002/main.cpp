//
//  main.cpp
//  N1002
//
//  Created by James Choi on 2020/07/14.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int isCollision(int x1, int y1, int r1, int x2, int y2, int r2){
    double R = r1+r2;
    double len = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    
    if(sqrt(pow((x1-x2),2)+pow((y1-y2),2)) < r1+r2){
        if(x1 == x2 && y1 == y2){ //중심점이 같을때
            if(r1 == r2) //반지름이 같으면 -1
                return -1;
            else //다르면 만나지 않음
                return 0;
        }
        else{ //중심점이 다를때
            if(sqrt(pow((x1-x2),2)+pow((y1-y2),2)) < abs(r2-r1)) //원 내부에 포함
                return 0;
            else if(sqrt(pow((x1-x2),2)+pow((y1-y2),2)) == abs(r2-r1)) //원에 내접
                return 1;
            else //점 2개
                return 2;
        }
    }
    else if(sqrt(pow((x1-x2),2)+pow((y1-y2),2)) == r1+r2) //원에 외접
        return 1;
    else //아예 밖에 있음
        return 0;
    
}
int main() {
    
    int T;
    int result;
    cin >> T;
    for(int i=0; i<T; i++){
        int x1, y1, x2, y2, r1, r2;
        cin >>x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        result = isCollision(x1, y1, r1, x2, y2,r2);
        cout << result << "\n";
    }
    return 0;
}
