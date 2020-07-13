//
//  main.cpp
//  N10250
//
//  Created by James Choi on 2020/07/13.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
using namespace std;
void hotel(int H, int W, int N){
    int X=1, Y=1;
    int room;
    //X가 방 개수를 초과하지 않는 범위에서 X를 구함
    while(N-H>0 && X<=W){
        N-=H;
        X++;
    }
    //Y가 층을 초과하지 않는 범위에서 몇층인지 구함
    while(N-1!=0 && Y<=H){
        N--;
        Y++;
    }
    //층과 방 개수는 99로 제한 되어 있으므로
    //*100을 해서 자리수를 맞춘다
    room = Y*100+X;
    cout << room << "\n";
}

int main(int argc, const char * argv[]) {
    int T, H, W, N;
    
    cin >> T;
    
    for(int i=0; i<T; i++){
        cin >> H >> W >> N;
        hotel(H,W,N);
        
        
    }
}
