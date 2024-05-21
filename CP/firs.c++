#include<bits/stdc++.h>
using namespace std;
int rec(int n,vector<int>&dp,vector<int>&arr){
    if(n==0)return 0;
    if(dp[n]!=-1)return dp[n];

    int o=INT_MAX,t=INT_MAX,th=INT_MAX;
    o=rec(n-1,dp,arr)+abs(arr[n]-arr[n-1]);

    if(n>1){
    t=rec(n-2,dp,arr)+abs(arr[n]-arr[n-2]);
    }
    if(n>2){
    th=rec(n-3,dp,arr)+abs(arr[n]-arr[n-3]);

    }
    dp[n]=min({t,o,th});
    return dp[n];

}
int main(){
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}

vector<int>dp(n+1,-1);
cout<< rec(n-1,dp,arr)<<endl;
    

}