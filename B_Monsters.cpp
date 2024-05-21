#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        priority_queue<pair<int,int>>pq;
        vector<int>dumm;
        for(int i=0;i<n;i++){
            int a;cin>>a;
            int p=a%k;
            if(p==0){
                dumm.push_back(i+1);
            }
            else
            pq.push({p,-1*(i+1)});
        }
       for(int i=0;i<dumm.size();i++){
        cout<<dumm[i]<<' ';
       }

       while(!pq.empty()){
        cout<<-1*pq.top().second<<' ';
        pq.pop();
       }cout<<endl;
    }
}