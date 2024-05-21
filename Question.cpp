#include<bits/stdc++.h>
#define int long long
using namespace std;
int solve(int x,vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        arr[i]=arr[i]%x;
    }

    unordered_map<int,int>mp;
    int count=0;
    for(int i=0;i<arr.size();i++){
        
        int diff=x-arr[i];
        count+=mp[diff];

        mp[arr[i]]++;
    }
    return count;
}
signed main(){
   
        int n,x;
        cin>>n>>x;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
       int ans=solve(x,arr);
       cout<<ans<<endl;
    
}