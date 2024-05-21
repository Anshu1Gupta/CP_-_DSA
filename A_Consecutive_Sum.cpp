#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        map<int,int>mp;

        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[i]=-1;
        }
        for(int i=0;i<n;i++){
            int ind=i%k;
            if(arr[i]>mp[ind])
            mp[ind]=arr[i];
        }
        vector<int>ans;
        for(auto it:mp){
            ans.push_back(it.second);
        }
        int sum=0;
        sort(ans.begin(),ans.end(),greater<>());
        for(int i=0;i<k;i++){
            sum=sum+ans[i];
        }
        cout<<sum<<endl;
    }
}