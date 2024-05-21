#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=INT_MAX;
   for(int i=0;i<20;i++){
       int y=0;
       int x=(n+i)%32768;
       y=i;

       while(x){
        ++y;
        x=(x*2)%32768;
       }

       ans=min(y,ans);
   }
   cout<<ans<<" ";
    }cout<<endl;
   
}