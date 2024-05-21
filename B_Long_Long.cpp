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
        int flag=0;

        if(arr[0]>0)flag=1;
        else flag=0;
        int count=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+= abs(arr[i]);
            if(arr[i]<0){
               if(flag==0){
                count++;
                flag=1;
               }
            }
            else if(arr[i]>0)flag=0;
        }

        cout<<sum<<" "<<count<<endl;
    }
}