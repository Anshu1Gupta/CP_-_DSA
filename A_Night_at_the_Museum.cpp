#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t=1;
    // cin>>t;
    while(t--){
       char st='a';
    string str;
    cin>>str;
    int sum=0;
       for(int i=0;i<str.size();i++){
           int first=abs(str[i]-st);
           int second=26-first;

           sum+=min(first,second);
           st=str[i];
       }
       cout<<sum<<endl;

   
    }
}