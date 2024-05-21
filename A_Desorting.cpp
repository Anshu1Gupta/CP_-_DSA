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
        int mini=1e9;
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=1;i<n;i++){
            mini=min(mini,arr[i]-arr[i-1]);
        }

        if(mini<0||mini==1e9){
            cout<<0<<endl;
        }
        else{
            cout<<(mini/2)+1<<endl;
        }
    }
}