#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int maxi=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                maxi=max(arr[i],maxi);
            }
        }
        cout<<maxi<<endl;
    }
}