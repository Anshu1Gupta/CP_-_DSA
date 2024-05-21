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

        int flag=0;
        
        for(int i=0;i<n;i++){

            if(arr[i]==0){
                flag=0;
            }
            else if(arr[i]!=0&&flag==0){
                count++;
                flag=1;
            }
            
        }
        
        if(count==0)cout<<count<<endl;
        else if(count==1)cout<<1<<endl;
        else cout<<2<<endl;

    }
}