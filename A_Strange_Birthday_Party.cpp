#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int brr[k];
         priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<k;i++)cin>>brr[i],pq.push(brr[i]);

       
       int ans=0;
       sort(arr,arr+n);
       reverse(arr,arr+n);
       for(int i=0;i<n;i++){
         if(brr[arr[i]-1]>pq.top()){
            ans+=pq.top();pq.pop();
         }
         else{
            ans+=brr[arr[i]-1];
         }
       }
       cout<<ans<<endl;
    }
}