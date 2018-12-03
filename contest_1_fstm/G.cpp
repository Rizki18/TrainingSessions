#include<bits/stdc++.h>
using namespace std;



int main()
{
    string s;
    int n;
    cin>>s;

    n = s.size();
    vector<int> a,b;
    for(int i=0;i<n;i++){
       if(s[i] == 'A' && i+1<n && s[i+1] == 'B'){
            a.push_back(i+1);
       }

       if(s[i] == 'B' && i+1<n && s[i+1] == 'A'){
            b.push_back(i+1);
       }
    }

    if(a.size() && b.size()){
        for(int i=0;i<a.size();i++){
            for(int j=0;j<b.size();j++){
                if(abs(a[i]-b[j])>1){
                    cout<<"YES";
                    return 0;
                }
            }
        }
    }
    cout<<"NO";
    return 0;
}