#include<bits/stdc++.h>
using namespace std;
#define int long long
static bool cmp(pair<pair<int,int>,int>&a,pair<pair<int,int>,int>&b){
    if(a.first.first>b.first.first){
        return true;
    }
    if(a.first.first==b.first.first){
        return a.first.second<b.first.second;
    }
}
signed main(){

int t;
cin>>t;
while(t--){
    int n,m,time;
    cin>>n>>m>>time;
     priority_queue<pair<pair<int,int>,int>>pq;
    vector<vector<int>>partTime(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>partTime[i][j];
        }
        sort(partTime[i].begin(),partTime[i].end());
    }
    for(int i=0;i<n;i++){
        auto arr=partTime[i];
        int sum=0;
        int rem=time;
        int k=0;
        int pen=0;
        for(;k<arr.size();k++){
           

            if(sum+arr[k]<=rem){
                 pen+=sum+arr[k];

              sum=sum+arr[k];
            }
            else{
                break;
            }
        }
        pq.push({{k,-1*pen},i});

    }
    // sort(ans.begin(),ans.end(),greater<>());
        // for(auto it:ans){
        //     cout<<it.first.first<<' '<<it.first.second<<' '<<it.second<<endl;
        // }
        // while(!pq.empty()){
        //  cout<<pq.top().first.first<<' '<<pq.top().first.second<<' '<<pq.top().second<<endl;
        //     pq.pop();
        // }
    deque<pair<int,int>>q;
    for(int i=0;pq.size()!=0;i++){
        int sc=pq.top().first.first;
        int pe=pq.top().first.second;
        int pl=pq.top().second;

        while(!q.empty()&&pl==0&&q.back().first==sc&&q.back().second==pe){
            q.pop_back();
        }
        q.push_back({sc,pe});
        if(pl==0)break;
        pq.pop();
    }
    cout<<q.size()<<endl;
    // cout<<endl;
    // cout<<endl;






}
}