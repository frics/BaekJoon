#include <iostream>
using namespace std;

int getAlpha(long long x, long long y){
    long long distance = y- x;
    long long front = 1, back = 1;
    long long cnt = 0;
    while(front < distance){
        cnt++;
        back++;
        front += cnt;
        if(front >= distance)
            break;
        back++;
        front += cnt;
        if(front >= distance)
            break;
        }
        if(front > distance)
            back--;
        return back;
}
int main() {
    int T;
    long long x, y;
    
    cin >> T;
    
    for(int i=0; i<T; i++){
        cin >>  x >> y;
        
        long long result = getAlpha(x, y);
        cout << result << "\n";
        
    }
}
