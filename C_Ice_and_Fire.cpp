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
    // for(int i=0;i<n;i++)cin>>arr[i];
    string str;
    cin>>str;
    int ans[n-1];
    ans[0]=1;
    for(int i=1;i<n-1;i++){
        if(str[i-1]==str[i]){
            ans[i]=ans[i-1];
        }
        else{
            ans[i]=i+1;
        }
    }
    for(int i=0;i<n-1;i++){
        cout<<ans[i]<<' ';
    }cout<<endl;
}
}