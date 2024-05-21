#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int low=1,high=2e9;
        while(low<=high){
            int mid=(low+high)/2;
            if(((mid)*(mid-1))/2<=n){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        int val=(high*(high-1))/2;
        cout<<high+(n-val)<<endl;
    }
}