#include<bits/stdc++.h>

using namespace std;



int main(){

    int n;
    cin>>n;
    vector<int> a(n);
    int impair = 0,plus_petit_impair = INT_MAX;
    int sum = 0,ans;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2){
            impair++;
            plus_petit_impair = min(plus_petit_impair,a[i]);
        }
        sum+=a[i];
    }

    if(impair == 0)
        ans = 0;
    else if(impair%2)
        ans=sum;
    else 
        ans = sum-plus_petit_impair;
    cout<<ans;
    return 0;
}