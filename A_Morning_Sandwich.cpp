#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
       int a,b,c;
       cin>>a>>b>>c;
       int ander=b+c;
     while(a>ander&&(a-ander)>1){
        a--;
     }
     cout<<a+(a-1)<<endl;
    }
}