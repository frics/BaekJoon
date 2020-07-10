//
//  main.cpp
//  N1316
//
//  Created by James Choi on 2020/07/09.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    int N, SUM=0;
    int check;
    int size;
    string word;
    cin >> N;
    for(int i=0; i<N; i++){
        check =1;
        cin >> word;
        size = word.length();
        for(int j=0; j< size; j++){
            if(j!= size-1){
                if(word.at(j) != word.at(j+1)){
                    for(int k=j+1; k<word.length(); k++){
                        if(word.at(j) == word.at(k))
                            check =0;
                    }
                }
            }
        }
        SUM+=check;
    }
    printf("%d\n", SUM);
}
