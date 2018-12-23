#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n;

    int d,f;
    d = 0;
    f = 90;
    for(int i=0;i<n;i++){
        cin>>t;
        if(t-d>15){
            cout<<d+15;
            return 0;
        }
        d = t;
    }
    if(f-d>15)
        cout<<d+15;
    else 
        cout<<f;
    return 0;
}