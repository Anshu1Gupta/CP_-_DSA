#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
       unordered_map<int,int>mp;
       set<int>set;
        vector<int>indegree(n+1,0);
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
           indegree[u]++;
           indegree[v]++;
        }
        for(int i=1;i<=n;i++){
           mp[indegree[i]]++;
           set.insert(indegree[i]);
        }
        int center=0;
        for(auto it:mp){
            if(it.second==1){
                center=it.first;
            }
        }
        for(int i=1;i<=n;i++){
            if(indegree[i]==center){
                center=i;
                break;
            }
        }
        if(set.size()==2){
            int y=0;
            int x=0;
           
            for(int i=1;i<=n;i++){
                
                if(indegree[i]==1)y++;
                else{
                    x++;
                }
            }
            x=x-1;
            if(x==y){
                cout<<x<<' '<<y<<endl;
            }
            else
            cout<<x<<' '<<y/x<<endl;
        }
        else{
            int x=0;
            int y=0;
            for(int i=1;i<=n;i++){
                if(i!=center&&indegree[i]!=1){
                    x++;
                }
                if(indegree[i]==1)y++;
            }
            cout<<x<<' '<<y/x<<endl;
        }
   

    }

}
// 5
// --center15
// 5 3
// 2
// --center4
// 3 1
// 2
// --center6
// 2 3