#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
    int n,c;
    cin>>n>>c;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans;
    int low=1;
    int high=1e9;

    while(low<=high){
        int mid=(low+high)/2;

        int sum=0;
        for(int i=0;i<n;i++){
            sum+=(arr[i]+2*mid)*(arr[i]+2*mid);
            if(sum>c)break;
        }

        if(sum>c){
            high=mid-1;
        }
        else if(sum<c){
            low=mid+1;
        }
        else{
            ans=mid;
            break;
        }
    }
    cout<<ans<<endl;
}
}