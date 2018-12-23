#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    long n,x,y,d,ans;
    cin>>t;
    while(t--){
        cin>>n>>x>>y>>d;
        ans = LONG_MAX;
        if( abs(x-y)%d == 0 )
            ans = abs(x-y)/d;
        if(abs(1-y)%d == 0)
            ans = min(ans,abs(x-1)/d + ((abs(x-1)%d == 0)?0:1) +abs(1-y)/d  );
        if(abs(n-y)%d == 0)
            ans = min(ans,abs(x-n)/d + ((abs(x-n)%d == 0)?0:1) +abs(n-y)/d  );

        

        if(ans == LONG_MAX)
            cout<<-1<<endl;
        else 
            cout<<ans<<endl;

    }
    return 0;
}