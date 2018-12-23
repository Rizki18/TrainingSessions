#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,x;
    vector<int> dp(101,0);
    vector<int> ans;
    
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>x;
        if(!dp[x]){
            ans.push_back(i+1);
        }
        dp[x]++;
        if(ans.size() == k)
            break;
    }

    if(ans.size() == k){
        cout<<"YES"<<endl;
        for(int i=0;i<k;i++)
            cout<<ans[i]<<" ";
        
    } else 
        cout<<"NO";


    return 0;
}