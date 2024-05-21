#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int  t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int brr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)cin>>brr[i];
    int mini=-1;
    int ind=-1;
    for(int i=0;i<n;i++ ){

        if(i+arr[i]<=k){
            if(mini<brr[i]){
                mini=brr[i];
                ind=i+1;
            }
        }
    }
    cout<<ind<<endl;
}
}