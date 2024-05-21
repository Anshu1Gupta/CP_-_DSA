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
sort(arr,arr+n);
int count=1;
int maxi=1;
for(int i=1;i<n;i++){
    if(arr[i]-arr[i-1]<=k){
        count++;
        maxi=max(maxi,count);
    }else{
        count=1;

    }
}
cout<<n-maxi<<endl;

    }
}