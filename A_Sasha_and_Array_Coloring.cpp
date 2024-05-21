#include<bits/stdc++.h>
using namespace std;
int  main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);
        int i=0;
        int j=n-1;
        int sum=0;
        while(i<j){
            sum+=arr[j]-arr[i];
            j--,i++;
        }
        cout<<sum<<endl;
    }
}