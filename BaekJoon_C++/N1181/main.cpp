//
//  main.cpp
//  N1181
//
//  Created by James Choi on 2020/07/28.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(string &word1, string &word2){
    if(word1.length() == word2.length())
        return word1 < word2;
    return word1.length() < word2.length();
    
}
int main(int argc, const char * argv[]) {
    int N;
    vector<string> word;
    cin >> N;
    
    string input;
    for(int i=0; i<N; i++){
        cin >>input;
        word.push_back(input);
    }
    sort(word.begin(), word.end(), cmp);
    word.erase(unique(word.begin(), word.end()),word.end());
    for(int i=0; i<word.size(); i++)
        cout << word[i] << "\n";
    
}
