#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int flag=0;
        for(int i=0;i<n;i++){
            flag=flag|arr[i];
            cout<<(flag^arr[i])<<' ';
        }
        cout<<endl;
        }cout<<endl;
    
}