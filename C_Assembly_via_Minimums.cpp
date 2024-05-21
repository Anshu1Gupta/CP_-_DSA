#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int t;
    cin>>t;
    while(t--){
        int p;
        cin>>p;
        int n=p*(p-1)/2;
        int ele=-1;
        map<int,int,greater<int>>mp;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            mp[a]++;
            ele=max(a,ele);
        }
      
      int greater=0;
      
      vector<int>ans;
      ans.push_back(ele);
      for(auto it:mp){
        
        int req=it.second;

        while(req>0){
            req-=ans.size();
            ans.push_back(it.first);
        }

     
        
      }
     
     for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<' ';
     }
cout<<endl;
    

    }
}