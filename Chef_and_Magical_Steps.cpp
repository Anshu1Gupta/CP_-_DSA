#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
vector<bool>isPrime(N,1);
void sieve(){
    isPrime[0]=isPrime[1]=false;

    for(int i=2;i<N;i++){
      if(isPrime[i]==true){
        for(int j=2*i;j<N;j+=i){
            isPrime[j]=false;
        }
      }
    }
}
#define int long long
int minSteps(int ind,int n,vector<int>&dp){
    if(ind>=n)return 0;
    if(dp[ind]!=-1)return dp[ind];

    int take1=1e9, take2=1e9;
      
      take1=1+minSteps(ind+1,n,dp);
 
      if(isPrime[ind+2]){
        take2=1+minSteps(ind+2,n,dp);
      }
      else
      take1=1+minSteps(ind+1,n,dp);

      return dp[ind]=min(take1,take2);
      
}
signed main(){
ios_base::sync_with_stdio(false);  
cin.tie(NULL); // flushes cout  
    sieve();
       vector<int>dp(1e7+10,-1);
    minSteps(1,1e7+1,dp);;
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
       cout<<dp[y]-dp[x]<<endl;

    }
}

