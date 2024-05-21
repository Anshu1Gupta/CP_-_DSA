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
        vector<int>req;
        int count=0;
        vector<int>res;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]>=(i+1))continue;
            count+=(long long)(lower_bound(res.begin(),res.end(),arr[i])-res.begin());
            res.push_back(i+1);
        }
        cout<<count<<endl;

    }
}