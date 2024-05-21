#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    vector<int>arr(n),brr(n);

    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)cin>>brr[i];
  
  unordered_map<int,int>mp;
  vector<int>m(n);
  if(m==arr){
    cout<<"YES"<<endl;
  }
  else{
    for(int i=0;i<n;i++){
       
       mp[arr[i]]=brr[i];
       mp[brr[i]]=arr[i];
    }
    int flag=0;
    for(int i=0;i<n;i++){
        if(mp[arr[i]]!=brr[i])
        flag=1;
        break;
    }
    if(flag==1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
  }
    }


}