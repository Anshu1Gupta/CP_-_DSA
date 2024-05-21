#include<bits/stdc++.h>
using namespace std;
#define int long long

int maxi(int ind,int remain,vector<int>&profit,vector<int>&weight,vector<vector<int>>&dp){
    if(ind>=profit.size())return 0;
   int take=0;

   if(dp[ind][remain]!=-1)return dp[ind][remain];
    if(remain>=weight[ind]){
        take=profit[ind]+maxi(ind+1,remain-weight[ind],profit,weight,dp);
    }
    int ntake=0+maxi(ind+1,remain,profit,weight,dp);

    dp[ind][remain]=max(take,ntake);
}
int solve(int n,vector<int>&iv,vector<int>&pages,int days){
    
    for(int i=0;i<n;i++)pages[i]=2*pages[i];

    vector<vector<int>>dp(n+1,vector<int>(days+1,-1));
    return maxi(0,days,iv,pages,dp);

}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,days;
        cin>>n>>days;
       vector<int> arr(n),brr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=0;i<n;i++)cin>>brr[i];

        int res=solve(n,arr,brr,days);
        cout<<res<<endl;
    }
}