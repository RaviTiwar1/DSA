#include <bits/stdc++.h>
#include <queue>

int main(){
    int n;

    n = stones.size();
    
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        pq.push(stones[i]);
    }

    while(pq.size()>1){
        int s1 = pq.top();
        pq.pop();
        int s2 = pq.top();
        pq.pop();

        if(s1!=s2) pq.push(abs(s1-s2));
    }

    if(pq.size()==1) return pq.top();
    else return 0;
}