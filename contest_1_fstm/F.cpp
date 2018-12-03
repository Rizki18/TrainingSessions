#include<bits/stdc++.h>

using namespace std;



int main(){
    int m,i;
    cin >> m;
    i = 0;
    while(m>0){
        i++;
        if(i%5 == 0)
            for(int j=i;j%5==0;j/=5)
    	        m--;
    }

    if(m!=0){
        cout << "0";
        return 0;
    }
    cout << "5"<<endl;
    for(int k=i;k<i+5;k++)
        cout << k << " ";
    return 0;
}