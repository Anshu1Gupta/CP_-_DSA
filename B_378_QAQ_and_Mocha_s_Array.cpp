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

        sort(arr,arr+n);
        vector<int>brr;

        for(int i=0;i<n;i++){
            if(arr[i]%arr[0]!=0){
                brr.push_back(arr[i]);
            }
        }
        int flag=0;
        for(int i=0;i<brr.size();i++){
            if(brr[i]%brr[0]!=0)flag=1;
        }
        if(flag==0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}