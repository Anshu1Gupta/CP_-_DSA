#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b,c;
        cin>>a>>b>>c;
        int flag=0;
        for(int i=0;i<n;i++){
           if((a[i]==b[i] &&a[i]!=c[i])||a[i]!=b[i]&&b[i]!=c[i]&&c[i]!=a[i]){
             flag=1;
           }
        }
        if(flag==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}