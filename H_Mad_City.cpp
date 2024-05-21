#include<bits/stdc++.h>
using namespace std;
#define int long long

 bool dfs(int source,vector<int>adj[],vector<int>&visited,vector<int>&path){
        path[source]=1;
        visited[source]=1;
        for(auto v:adj[source]){
            if(visited[v]==0){
                if(dfs(v,adj,visited,path))return true;
            }
            else if(path[v])return true;
        }
        path[source]=0;
        return false;
    }
signed main(){
   int t;
   cin>>t;
   while(t--){
     int n,p,q;
    cin>>n>>p>>q;
    p--;
    q--;
    vector<int>adj[n];
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;u--,v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    vector<int>visited(n,0),path(n,0);
    dfs(0,adj,visited,path);

    int isCyclic=false;
    bool safe=false;
    for(int i=0;i<n;i++)cout<<i<<' ';
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<path[i]<<' ';
        if(path[i]==1){
            // isCyclic=true;
            // if(i==q){
            //     safe=true;
            // }
        }
    }cout<<endl;

    // if(!isCyclic==false)cout<<"NO"<<endl;
    // else if(!safe)cout<<"NO"<<endl;
    // else cout<<"YES"<<endl;
   }


}