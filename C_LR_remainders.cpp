#include<bits/stdc++.h>
using namespace std;
#define int long long
signed  main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int mod=1e9;
        deque<int>q;
        int pro=1;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            q.push_back(a);
            pro=(pro*a) %mod;
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(pro%k);
            char x;
            cin>>x;
            if(x=='L'){
               pro/= q.front();
                q.pop_front();
            }
            else{
                pro/= q.back();
                q.pop_back();
            }
        }

        for(int i=0;i<ans.size();i++)cout<<ans[i]<<' ';
        cout<<endl;

        
    }
}