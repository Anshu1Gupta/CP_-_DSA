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
        int ind0=0;
        int indN=0;
        int emerge=0;
        for(int i=0;i<n;i++){
            if(arr[0]==arr[i])emerge++;
        }
        int i=0;

        for(;i<n;i++){
            if(arr[0]==arr[i]){
                ind0++;
                if(ind0==k)break;
            }
        }
        
        for(;i<n;i++){
           if(arr[n-1]==arr[i]){
            indN++;
            if(indN==k)break;
           }
        }
        if(((ind0==k)&&(indN==k))||((arr[0]==arr[n-1])&&(emerge>=k)))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }




}
