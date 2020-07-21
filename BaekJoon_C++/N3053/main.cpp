//
//  main.cpp
//  N3053
//
//  Created by James Choi on 2020/07/21.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>


using namespace std;
#define PI 3.141592653589
int main(int argc, const char * argv[]) {
    int R;
    cin >> R;
    
    double uclid = R*R*PI;
    double taxi = 2*R*R;
    
    printf("%lf\n", uclid);
    printf("%lf\n", taxi);
}
