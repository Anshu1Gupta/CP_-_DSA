#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
    int n,k,p;
    cin>>n>>k>>p;
    if(k==1||k==2&&p==1&&(n%2==1)){
        cout<<"NO"<<endl;
    }
    else if(p!=1){
        cout<<"YES"<<endl;
     for(int i=1;i<=n;i++){
        cout<<i<<' ';
     }
    }
    else{
        if(p==1&&n%2==1){
            cout<<"YES"<<endl;
            cout<<3<<' ';
            n=n-3;
            for(;n;){
                cout<<2<<' ';
                n=n-2;
            }
        }

    }
    
      
   }
}   