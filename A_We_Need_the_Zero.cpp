#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
         map<int,int>mp;
        int ans=0;
        
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            ans=ans^arr[i];
        }
        for(int i=0;i<n;i++){
            arr[i]=arr[i]^ans;
        }
        int final=0;
        for(int i=0;i<n;i++){
            final=final^arr[i];
        }
        if(final==0)cout<<ans<<endl;
        else cout<<-1<<endl;
        
    //    if(n==1)cout<<arr[0]<<endl;
    //    else if(n==2){
    //     if(arr[0]==arr[1])cout<<0<<endl;
    //     else cout<<-1<<endl;
    //    }
    //    else{
    //     if(mp.size()==1){
    //         cout<<arr[0]<<endl;
    //     }
    //     else if(mp.size()==2){
    //        int brr[2];
    //        int i=0;
    //        for(auto it:mp){
    //         brr[i++]=it.first;
    //        }
    //        if(brr[0]==brr[1])cout<<brr[0]<<endl;
    //        else cout<<-1<<endl;
    //     }
    //     else{
    //         cout<<ans<<endl;
    //     }
        
    //    }

    }
}