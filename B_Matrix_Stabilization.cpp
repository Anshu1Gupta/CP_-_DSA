#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>dir{{-1,0},{0,-1},{1,0},{0,1}};
bool ifBiggest(vector<vector<int>>&arr,int i,int j,int n,int m){

int flag=0;
for(auto it:dir){
    int nx=i+it.first;
    int ny=j+it.second;

    if(nx<n &&nx>=0 &&ny<m&&ny>=0){
        if(arr[nx][ny]>=arr[i][j]){
           return false;
        }
    }
   
}
     return true;
}
int bhardo(vector<vector<int>>&arr,int i,int j,int n,int m){
    int ans=-1;
    for(auto it:dir){
        int nx=i+it.first;
        int ny=j+it.second;

        if(nx<n &&nx>=0 &&ny<m&&ny>=0){
            ans=max(ans,arr[nx][ny]);
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>arr(n,vector<int>(m));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }


        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ifBiggest(arr,i,j,n,m)){

                    arr[i][j]=bhardo(arr,i,j,n,m);
                }
            }
        }


        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<arr[i][j]<<' ';
            }cout<<endl;
        }

    }
}