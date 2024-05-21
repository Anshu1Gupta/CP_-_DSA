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
        if(n%2==1)cout<<"YES"<<endl;
        else{
            int sum=0;
            for(int i=0;i<n;i=i+2){
                sum=sum+(arr[i]-arr[i+1]);
            }
            if(sum<=0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}