#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

    vector<int>cnt(n+1,0),mx(n+1,0);
        for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x<=n)
        {
            ++cnt[x];
        }
        
      }
      int maxi=-1;
      for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            mx[j]+=cnt[i];
            maxi=max(maxi,mx[j]);
        }
      }
      cout<<maxi<<endl;
    }

}