//
//  main.cpp
//  N7568
//
//  Created by James Choi on 2020/07/22.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
using namespace std;

struct Person{
    char name;
    int weight;
    int height;
    int rank =1;
};
void ranking(int N, Person *people){
    for(int i= 0; i<N; i++){
        for(int j=0; j<N; j++){
            if(people[i].name != people[j].name){
                if(people[i].height<people[j].height && people[i].weight<people[j].weight)
                    people[i].rank++;
            }
        }
         
    }
}
int main (){
    int N;
    Person people[50];
    char name = 'A';
    cin >> N;
   
    for(int i= 0; i<N; i++){
        people[i].name = name++;
        cin >> people[i].weight >> people[i].height;
   }
    ranking(N, people);
    
    for(int i=0; i<N; i++)
        cout << people[i].rank << " ";
}

