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

        int count=0;
        for(int i=0;i<n;i++){
            if(i+1==arr[i])count++;
        }

        cout<<(ceil((count)/2.0))<<endl;
    }
}