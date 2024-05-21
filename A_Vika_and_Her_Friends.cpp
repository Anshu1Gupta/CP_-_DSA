#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;

        int a,b;
        int flag=0;
        cin>>a>>b;
        while(k--){
            int x,y;
            cin>>x>>y;
           if((x+y)%2==(a+b)%2)flag=1;
        }

        if(flag==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
// cout<<1<<endl;

    }
}