#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
 int t;
 cin>>t;
 while(t--){
    string str;

    cin>>str;
    int n=str.length();
    int len=2*n;
    if(str=="()"||n==1){
        cout<<"NO"<<endl;
    }
  
    else{
      int flag=0;
      for(int i=0;i<n-1;i++){
        if(str[i]==str[i+1]){
            flag=1;
        }
      }

      if(flag==1){
        string ans="()";
        string res="";
        while(n--){
           res+=ans;
        }

        cout<<"YES"<<endl;
        cout<<res<<endl;
      }
      else{
        string ans="";
        for(int i=0;i<n;i++){
ans+='(';
        }
        for(int i=0;i<n;i++){
            ans+=')';
        }
        cout<<"YES"<<endl;
        cout<<ans<<endl;
      }

    }
 }
}