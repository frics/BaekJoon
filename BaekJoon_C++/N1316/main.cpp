#include <iostream>
using namespace std;

#define MAX 64

int main() {
    
    //int image[MAX][MAX];
    char image[MAX];
    char ans[1000];
    int N;
    
    cin >> N;
    
    if( N%2 != 0){
        cout << "FAIL\n";
        return 0;
    }
    
    for(int i=0; i<N; i++){
        //for(int j=0; j<N; j++){
            cin >> image[i];
        //}
    }
    for(int i=0; i<N; i++){
    cout << image[i];
    }
    /*
    for(int i=0; i<N; i++){
        cout << "\n";
        for(int j=0; j<N; j++){
            cout << image[i][j] <<"  ";
        }
    }*/
    return 0;
}
