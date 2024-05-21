#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++)cin>>arr[i];

        sort(arr,arr+n);

        int low=*max_element(arr,arr+n);
        int high=1e9;
        int ans=1;
        while(low<=high){
            int mid=(low+high)/2;


            // if(found(mid,arr)==true){
                ans=mid;
                break;
            // }
        }


    }
}