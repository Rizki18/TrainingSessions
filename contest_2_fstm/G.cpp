#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,c,ans;
    int taille_avant,taille_actuelle;
    string s;
    vector< pair<int,int> > dp;

    cin>>n>>s;
    
    c = 0;
    for(int i=0;i<n;i++){
        if(s[i] == 'G')
            c++;
        else {
            if(c != 0){
                dp.push_back(make_pair(i-c,i-1));
                c = 0;
            }
        }
    }
    if(c>0){
        dp.push_back(make_pair(n-c,n-1));
    }

    
    if(dp.size() == 0){
        cout<<0<<endl;
        return 0;
    }
    bool cond = dp.size()>=3;
    ans = dp[0].second - dp[0].first + 1;
    if( dp.size() >= 2 )
        ans++;
    for(int i = 1 ; i < dp.size() ; i++ ){

        taille_actuelle = abs((dp[i].second - dp[i].first + 1));
        taille_avant = abs((dp[i-1].second - dp[i-1].first + 1));
        
       ans = max( ans , taille_actuelle + 1 );
       if( abs(dp[i-1].second - dp[i].first ) == 2){
            if( cond )
                ans = max( ans , taille_actuelle + taille_avant + 1);
            else if(taille_actuelle > 1 || taille_avant > 1)
                ans = max( ans , taille_actuelle + taille_avant); 
       }
    }
    cout<<ans;
    return 0;
}