#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    int arr[n],drr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)cin>>drr[i];
     unordered_map<int,int>mp;
     int ans=0;
     for(int i=0;i<n;i++){
      mp[arr[i]]++;
      mp[drr[i]]++;
      ans=max(ans,max(mp[arr[i]],mp[drr[i]]));
     }
     cout<<ans<<endl;
    }

    }