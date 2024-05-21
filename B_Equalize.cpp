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
        int mini=*min_element(arr,arr+n);
        for(int i=0;i<n;i++){
            arr[i]=arr[i]-mini+1;
        }
        sort(arr,arr+n);
        unordered_map<int,int>mp;
        for(auto it:arr){
            mp[it]++;
        }

    }
}