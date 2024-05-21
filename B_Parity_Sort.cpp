#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>even,odd;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                even.push_back(arr[i]);
            }
            else odd.push_back(arr[i]);
        }
        queue<int>e,o;
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        for(int i=0;i<even.size();i++){
            e.push(even[i]);
        }
        for(int i=0;i<odd.size();i++){
            o.push(odd[i]);
        }


        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
              arr[i]=e.front();e.pop();
            }
            else{
              arr[i]=o.front();o.pop();
            }
        }
       int flag=0;
        for(int i=1;i<n;i++){
       if(arr[i-1]>arr[i]){
        flag=1;
       }
        }
        if(flag==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}