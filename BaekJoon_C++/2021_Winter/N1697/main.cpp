//
//  main.cpp
//  N11047
//
//  Created by James Choi on 2021/01/11.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
#include <queue>

using namespace std;

bool visited[100001] = {0, };

int bfs(int N, int K){
    int cnt = 0;
    //너비우선 탐색 구현을 위한 큐 사용
    queue<int> Q;

    //시작위치를 큐에 삽입, 방문 체크 
    Q.push(N);
    visited[N] = 1;
    while(!Q.empty()){
        //현재 횟수에서 큐에 들어가있는 만큼 탐색을 해야되기 때문에
        //큐의 사이즈만큼 반복문 수행
        int breadth = Q.size();

        for(int i=0; i<breadth; i++){
            int check = Q.front();
            Q.pop();
            if(check == K)
                return cnt;

            //bfs이므로 지금 노드의 모든 경우를 확장시킴
            //이미 방문한 노드이면 큐에 추가하지 않음
            if((check-1) >= 0 && visited[check-1] == 0){
                //뒤로 이동
                Q.push(check-1);
                visited[check-1] = 1;
            }
            if((check+1) <= 100000 && visited[check+1] == 0){
                //앞으로 이동
                Q.push(check+1);
                visited[check+1] = 1;
            }
            if((check*2) <= 100000 && visited[check*2] == 0){
                //순간이동
                Q.push(check*2);
                visited[check*2] = 1;
            }
        }
        cnt++;
    }
    return -1;
}
int main() {
    int N, K;

    cin >> N >> K;

    printf("%d\n", bfs(N, K));
    return 0;
}
