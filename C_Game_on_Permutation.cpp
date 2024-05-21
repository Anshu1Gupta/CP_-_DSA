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
       for(int i=1;i<n;i++){
        if(arr[i-1]<arr[i]){
            count=1;
            int key=arr[i];
            while(i<n-1&&arr[i+1]<key&&arr[i+1]>arr[0]){
                count++;
                key=arr[i+1];
                i++;
                
            }
            break;
        }
       }
       cout<<count<<endl;

    }
}