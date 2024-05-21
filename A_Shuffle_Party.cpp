#include<bits/stdc++.h>
// time: 8:23
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    vector<int>arr(32);

    for(int i=0;i<=31;i++){
        int num=pow(2,i);
        arr[i]=num;
    }
    while(t--){
        int n;
        cin>>n;
        int ind= upper_bound(arr.begin(),arr.end(),n)-arr.begin();

        cout<<arr[ind-1]<<endl;

    }
}