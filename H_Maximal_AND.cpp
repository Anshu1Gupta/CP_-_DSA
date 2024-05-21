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
        vector<int>mp(31,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        for(int i=0;i<n;i++){
            for(int bit=0;bit<31;bit++){
                int flag=0;
                flag=arr[i]&(1<<bit);

                if(flag){
                    mp[bit]++;
                }
            }
        }
        
        int ans=0;
        for(int i=30;i>=0;i--){
            if(mp[i]+k>=n){
                ans+=(1<<i);
                k=k-(n-mp[i]);
            }
        }
        cout<<ans<<endl;
        // cout<<endl<<endl;;
    }
}