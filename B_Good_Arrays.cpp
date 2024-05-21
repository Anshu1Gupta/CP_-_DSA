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
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
      
      int req=0;
      int sum=0;
        for(int i=0;i<n;i++){
           if(arr[i]==1){
           req++;
           }
           
           sum+=arr[i];
           
        
        }
       if(sum>=(req+n)&&n>1)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;


    }
}