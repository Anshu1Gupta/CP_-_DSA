#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int mini=*min_element(arr,arr+n);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i]-mini;
    }
    cout<<sum<<endl;
}
}