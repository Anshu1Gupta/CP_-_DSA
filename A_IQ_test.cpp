#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int,int>even,odd;

    int o=0,e=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2)odd[arr[i]]=i+1,o++;
        else even[arr[i]]=i+1,e++;
    }
    if(e==1)cout<<even.begin()->second<<endl;
    else cout<<odd.begin()->second<<endl;

}