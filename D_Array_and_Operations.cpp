#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        
        // int l=0,r=n-1;
        queue<int>q;
        for(int i=n-1;i>=0;i--){
            q.push(arr[i]);
        }
        int ans=0;
        while(k--){
            int num2=q.front();q.pop();
            int num1=q.front();q.pop();
            ans+=num1/num2;
        }

        while(!q.empty()){
            ans+=q.front();q.pop();
        }
        cout<<ans<<endl;
        // 1 10 10 1 10 2 7 10 3
        // 1 1 2 3 7 10 10 10 10

        // cout<<ans<<endl;

    }
}