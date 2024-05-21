#include<bits/stdc++.h>
using namespace std;
// #define int long long
signed main(){
   int t;
   cin>>t;
   while(t--){
     int n,k;
    cin>>n>>k;
    int co=0;
    vector<int>arr(n),brr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)cin>>brr[i];
    
    int start=0;
    int end=1;
    int count=arr[start];
    int maxi=0;
    if(arr[0]<=k)co=1;
    while(end<n){
    if(brr[end-1]%brr[end]==0){
        count+=arr[end];
    }
    else{
        start=end;
        count=arr[start];
    }
    if(count>k){
        while(count>k){
            count-=arr[start];
            start++;
        }
    }
    if(end!=start)
       maxi=max(maxi,end-start+1);


    if(arr[end]<=k)co=1;
    end++;
        
    }
    cout<<max(co,maxi)<<endl;
   }
    
}