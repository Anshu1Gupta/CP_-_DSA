#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
     int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    
    unordered_map<int,vector<int>>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]].push_back(i);
    }
int ans=n;
    for(auto it:mp){
        priority_queue<int>q;
        vector<int>brr=it.second;
        brr.insert(brr.begin(),-1);
        brr.push_back(n);

        // for(int i=0;i<brr.size();i++){
        //     cout<<brr[i]<<' ';
        // }cout<<endl;
        
        for(int i=1;i<brr.size();i++){
            int diff=(brr[i]-brr[i-1]-1);
            q.push(diff);
        }cout<<endl;
        
       int a=q.top()/2;q.pop();
       int b=q.top();

         int ind=max(a,b);
       ans=min(ans,ind);

    }
    cout<<ans<<endl;
   }
}