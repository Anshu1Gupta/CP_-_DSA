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
    for(int i=0; i<n; i++)cin>>arr[i];
    
    int maxi=*max_element(arr,arr+n);
    int  mini=*min_element(arr,arr+n);
   int count=0;
    for(int i=0;i<n;i++){
        if(maxi==arr[i])count++;
    }
    if(maxi==mini)cout<<-1<<endl;

    else{
        cout<<n-count<<' '<<count<<endl;;
      for(int i=0;i<n;i++){
        if(arr[i]!=maxi){
            cout<<arr[i]<<' ';
        }
      }cout<<endl;
      for(int i=0;i<n;i++){
        if(arr[i]==maxi){
            cout<<maxi<<' ';
        }
      }cout<<endl;
    }
    


    
}
}