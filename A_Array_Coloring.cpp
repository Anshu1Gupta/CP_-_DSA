#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
      int arr[n];
      for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
      }
      if(sum%2==0&&n>=2){
        cout<<"YES"<<endl;
      }
      else cout<<"NO"<<endl;
    }
}
