#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int t;
cin>>t;
while(t--){
    int n,q;
    cin>>n>>q;
    int arr[n];
    int qrr[q];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<q;i++)cin>>qrr[i];
    int prefix[n];
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
       prefix[i]=arr[i]+prefix[i-1];
    }
    int till[n];
    int maxi=-1;
    for(int i=0;i<n;i++){
        till[i]=max(arr[i],maxi);
        maxi=till[i];
    }
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[till[i]]=prefix[i];
    //    cout<<prefix[i]<<' '<<till[i]<<endl;
    }
    vector<int>ans;
    for(auto it:mp){
      ans.push_back(it.first);
    }
    sort(ans.begin(),ans.end());
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<endl;
    // }
    for(int i=0;i<q;i++){
        int ind=lower_bound(ans.begin(),ans.end(),qrr[i])-ans.begin();
         if(ind==ans.size()){
            cout<<mp[ans[ind-1]]<<" ";
         }
         else if(ans[ind]==qrr[i]){
            cout<<mp[ans[ind]]<<" ";
         }
         else{
            if(ans[ind]!=qrr[ind]&&ind==0){
                cout<<0<<' ';
            }
            else{
                cout<<mp[ans[ind-1]]<<' ';
            }

         }
    }


cout<<endl;
}
}