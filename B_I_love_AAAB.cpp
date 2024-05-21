#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
         int count=0;

         int flag=0;
        int n=str.length();
        for(int i=0;i<n;i++){
          if(str[i]=='A')count++;
          else count--;
          if(count<0){
            flag=1;
          }
        }
        if(flag==1||str[0]!='A'||str[n-1]!='B')cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
       
    }
}