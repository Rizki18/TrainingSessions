#include <bits/stdc++.h>
using namespace std;

const int M = 1e5+5;

int main(){
    int n,m,s;
    long long r;
    cin>>n>>m;
    priority_queue<long long> dp[M];
    for(int i=0;i<n;i++){
        cin>>s>>r;
    dp[s-1].push(r);
    }

    vector<long long> sums(n+1,0);
    int c = 0,j;
    long long tmp;
    for(int i=0;i<m;i++){
        tmp = 0;
        j=0;
        while(dp[i].size()>0 && (tmp +dp[i].top())>=0){
            tmp += dp[i].top();
            sums[j]+=tmp;
            dp[i].pop();
            j++;
        }
    }
    
    cout<<*max_element(sums.begin(), sums.end());



    return 0;
}