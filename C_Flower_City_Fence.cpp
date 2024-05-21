#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       vector<int>arr(n);
        int maxi=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            maxi=max(maxi,arr[i]);
        }
       if(maxi>n){
        cout<<"NO"<<endl;
       }
       else{
       vector<int>pil(maxi+2,0);

       for(int i=0;i<n;i++){
           pil[0]++;
           pil[arr[i]+1]--;
       }

       for(int i=1;i<maxi+1;i++){
        pil[i]=pil[i]+pil[i-1];
       }
        pil.erase(pil.begin());
        vector<int>ans;
       for(int i=0;i<maxi;i++){
        ans.push_back(pil[i]);
        // cout<<ans[i]<<' ';
       }
       if(ans==arr){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
       }
       

       
    }
}