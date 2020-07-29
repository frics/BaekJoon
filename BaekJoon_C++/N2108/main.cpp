//
//  main.cpp
//  N2108
//
//  Created by James Choi on 2020/07/27.
//  Copyright © 2020 James Choi. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
#define M 500000

struct Number{
    int val;
    int many;
};
Number arr[M];

bool cmp1(Number &n1, Number &n2){
    if(n1.val < n2.val)
        return true;
    else
        return false;
}
bool cmp2(Number &n1, Number &n2){
    
    if(n1.many > n2.many)
            return true;
    else if(n1.many == n2.many && n1.val < n2.val)
        return true;
    else
        return false;
}


int middle(int N){
    return arr[((N+1)/2)-1].val;
}


int most(int N){
    int j;
    if(N==1)
        return arr[0].val;
    for(int i=0; i < N; i=j){
        int cnt=1; //기본적으로 모든 숫자는 cnt 1에서 시작
        j=i+1; //크기 순으로 정렬됬으므로 다음 인덱스부터 비교
        //같으면 cnt증가 및 j증가 i는 증가된 j부터 탐색 다만 j가 N보다 작을 때
        while(arr[i].val == arr[j].val && j<N){
            cnt++;
            j++;
        }
        arr[i].many = cnt; //각 빈도수를 arr 구조체에 저장

    }
    sort(arr, arr+N, cmp2); //빈도수를 기준으로 다시 정렬
    //만약 같은 빈도수의 숫자가 여러개 있다면 2번째로 작은것을 출력
    //이미 먼저 오름차순으로 정렬을 했기 때문에 빈도수대로 다시 정렬해도 그 순서는 유지
    if(arr[0].many != arr[1].many)
        return arr[0].val;
    else
        return arr[1].val;
    
}


int range(int N){
    if(N==1)
        return 0;
    return arr[N-1].val - arr[0].val;
}
int main(){
    int N;
    int sum=0;
    int len;
    cin >> N;
    
    for(int i=0; i<N; i++){
        arr[i].many=0;
        arr[i].val=0;
    }
    for(int i=0; i<N; i++){
        cin >> arr[i].val;
        sum += arr[i].val;
    }

    sort(arr, arr+N, cmp1);
    printf("%.0f\n", (double)sum/N);
    cout << middle(N) << "\n";
    len = range(N);
    cout << most(N) << "\n";
    cout << len << "\n";
   
}

