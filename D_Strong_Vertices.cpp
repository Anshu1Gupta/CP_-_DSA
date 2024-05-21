#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];

        for(int i=0;i<n;i++){
            int b;
            cin>>b;
            arr[i]=arr[i]-b;
        }

        int maxi=*max_element(arr,arr+n);

        vector<int>ans;
        for(int i=0;i<n;i++){
            if(maxi==arr[i]){
                ans.push_back(i+1);
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<' ';
        }cout<<endl;
    }
}