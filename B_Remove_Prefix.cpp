#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  unordered_map<int,int>mp;
  int ans=0;
    for(int i=n-1;i>=0;i--){
     mp[arr[i]]++;
     if(mp[arr[i]]>1){
        ans=i+1;
        break;
     }
    }
    cout<<ans<<endl;
    }

}