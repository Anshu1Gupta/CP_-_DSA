#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            arr.push_back(a);
        }

        int mini=-1;
        int ans=-1;
        for(int i=1;i<n;i++){
            int small= arr[i]>arr[i-1]?arr[i-1]:arr[i];
            int big=arr[i]>arr[i-1]?arr[i]:arr[i-1];

            ans=max(ans,small);
        }
        for(int i=2;i<n;i++){
            int ar[3]={arr[i-2],arr[i-1],arr[i]};
            sort(ar,ar+3);
            ans=max(ans,ar[1]);
        }
        cout<<ans<<endl;
    }
}