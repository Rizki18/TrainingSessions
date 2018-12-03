#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    long long a,b;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        if(a-b>1)
            cout<<"NO";
        else {
            a = a+b;
            bool is = true;;
            for(long long i=2;i*i<=a;i++)
                if(a%i == 0){
                    is = false;
                    break;
                }
            if(is)
                cout<<"YES";
            else
                cout<<"No";
        }
        cout<<endl;
    }
    return 0;
}