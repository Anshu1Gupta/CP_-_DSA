#include<bits/stdc++.h>
using namespace std;
#define int long long
int bfs(int i,int j,vector<vector<int>>&visited){
queue<pair<int,int>>q;
int n=visited.size();
int m=visited[0].size();
q.push({i,j});
int cost=visited[i][j];
visited[i][j]=0;
vector<pair<int,int>>dir{{-1,0},{0,-1},{0,1},{1,0}};
while(!q.empty()){
    int x=q.front().first;
    int y=q.front().second;
    q.pop();
for(auto it:dir){
  int nx=x+it.first;
  int ny=y+it.second;
  if(nx>=0&&nx<n&&ny>=0&&ny<m&&visited[nx][ny]!=0){
    cost=cost+visited[nx][ny];
    visited[nx][ny]=0;
    q.push({nx,ny});

  }
}
}
return cost;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>visited(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>visited[i][j];
            }
        }
        int sum=0;
   
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
if(visited[i][j]!=0){
    sum=max(sum,bfs(i,j,visited));
}

            }
        }
        cout<<sum<<endl;
    }
}