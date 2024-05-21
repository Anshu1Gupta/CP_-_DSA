#include<bits/stdc++.h>
using namespace  std;         
#define int long long 
signed main(){
    int t;
    cin>>t;
    while(t--){
    int  x,y,n;
    cin>>x>>y>>n;
    int rem=n%x;
    // int chahiye=y-rem;
    if(rem==y){
        cout<<n<<endl;
    }
    else if(x>=n){
        cout<<y<<endl;
    }
    else{
      int store=n-x;
      if(rem>y){
        cout<<n-(rem-y)<<endl;
      }
      else{
        cout<<store-(rem-y)<<endl;
      }

    }
    }
}