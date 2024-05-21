#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        int sum=0;
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=0;i<n;i++){
            if(i%2==0)sum-=arr[i];
            else sum+=arr[i];
        }

     string ans=(n%2==1||sum>=0)?"YES":"NO";
     cout<<ans<<endl;
    }
}
