#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=3*n;
        int i=1;
        int j=x;
        int count=0;
        vector<pair<int,int>>ans;
        while(i<j){
           ans.push_back({i,j});
           i=i+3;
           j=j-3;
        }
        cout<<ans.size()<<endl;
        for(auto it:ans){
            cout<<it.first<<' '<<it.second<<endl;
        }
    }
}