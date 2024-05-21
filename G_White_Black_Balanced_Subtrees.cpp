#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>>adj[n];
        
        for(int v=2;v<=n;v++){
            int u;
            cin>>u;
            adj[u].push_back({v,0});
        }

    }
}