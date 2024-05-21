#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],brr[n];
        unordered_map<int,int>mp;
       for(int i=0;i<n;i++)cin>>arr[i];
       for(int i=0;i<n;i++)cin>>brr[i];

       int i=0;
       int j=0;
       int ans=0;
       while(i<n&&j<n){
        if(arr[i]==brr[j]){
            i++;j++;
            mp[brr[j]]++;
        }
        else if(arr[i]!=brr[j]){
            if(mp.find(arr[i])!=mp.end()){
                i++;
            }
            else{
                mp[brr[j]]++;
                j++;
                ans=max(ans,j);
                
            }

        }
       }
       cout<<ans<<endl;
    }
}