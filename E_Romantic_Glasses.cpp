#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i%2==1)arr[i]=-arr[i];
        }
        int sum=0; 
        int flag=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(mp.count(sum)){
                flag=1;
                break;
            }
            mp[sum]++;
        }
        if(flag==1)cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}