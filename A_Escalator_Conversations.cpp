#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k,h;
        cin>>n>>m>>k>>h;

        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        unordered_map<int,int>mp;
        for(int i=1;i<=m;i++){
            for(int j=i+1;j<=m;j++){
                int diff=abs(k*i-k*j);
                mp[diff]=1;
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            int diff=abs(h-arr[i]);
            if(mp.find(diff)!=mp.end())cnt++;
        }
        cout<<cnt<<endl;
    }
}

