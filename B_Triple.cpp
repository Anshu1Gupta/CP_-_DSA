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

        for(int i=0;i<n;i++)cin>>arr[i];

        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int flag=0;
        for(auto it:mp){
            if(it.second>=3){
                cout<<it.first<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)cout<<-1<<endl;
    }
}