#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
       
        int arr[n],query[q];
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int k=0;k<q;k++)cin>>query[k];
        sort(arr,arr+n);
        vector<int>ans(n);
        ans[0]=((n-1)*(n-2))/2;
        for(int i=1;i<n;i++){
            ans[i]=((n-i-1)*(n-i-2))/2+ans[i-1];
        }
       
        for(int i=0;i<q;i++){
        int ind=lower_bound(ans.begin(),ans.end(),query[i])-ans.begin();
        cout<<arr[ind]<<endl;
        }
        
    //   10 6 3 1 0 0 
    //   3 1 0 0
      

    }
}