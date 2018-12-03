#include<bits/stdc++.h>

using namespace std;



int main(){
    long long n,tmp;
    cin>>n;  
    for(long long i=2;i*i<=n;i++){
        if(n%i == 0){
            if(i == 2)
                cout<<n/i;  
            else 
                cout<<(1 + (n-i)/2);
            return 0;
        }        

    }


    cout<<1;
    return 0;


}