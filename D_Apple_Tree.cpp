#include<bits/stdc++.h>
using namespace std;
#define int long long
void dfs(int source,vector<int>&dist,vector<int>adj[],vector<int>&visited){
    visited[source]=1;
    for(auto it:adj[source]){
        if(visited[it]==0){
            dfs(it,dist,adj,visited);
             dist[source]+=dist[it];
        }
    }
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int V;
        cin>>V;
        vector<int>adj[V+1];
        for(int i=0;i<V-1;i++){
           int u,v;
           cin>>u>>v;
           adj[u].push_back(v);
           adj[v].push_back(u);
        }
        int q;
        cin>>q;
        vector<pair<int,int>>qr;
        for(int i=0;i<q;i++){
            int a,b;
            cin>>a>>b;
            qr.push_back({a,b});
        }
        
        vector<int>visited(V+1,0),dist(V+1,0);
        for(int i=2;i<=V;i++){
            if(adj[i].size()==1)dist[i]=1;
        }
        dfs(1,dist,adj,visited);
        for(int i=0;i<q;i++){
            int x=qr[i].first;
            int y=qr[i].second;
            cout<<dist[x]*dist[y]<<endl;
        }
       
    }
}