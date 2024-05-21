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
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
vector<int>ans;
ans.push_back(1);
vector<int>dumm;
dumm.push_back(arr[0]);
int i=1;
for(;i<n;i++){
    if(dumm.back()<=arr[i]){
        ans.push_back(1);
        dumm.push_back(arr[i]);
    }
    else{
        if(arr[i]>arr[0]){
            ans.push_back(0);
        }
        else{
            ans.push_back(1);
            break;
        }
    }
}
if(i<n){
    int dip=arr[i];
    int above=arr[0];
    dumm.push_back(arr[i]);
i++;
for(;i<n;i++){
    if(dumm.back()<=arr[i]&&arr[i]<=arr[0]){
        dumm.push_back(arr[i]);
        ans.push_back(1);
    }
    else{
        ans.push_back(0);
    }
}

}
for(int i=0;i<n;i++){
    cout<<ans[i];
}
cout<<endl;
    }
}