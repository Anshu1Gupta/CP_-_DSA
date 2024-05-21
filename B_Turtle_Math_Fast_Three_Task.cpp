#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        
        if(sum%3==0)cout<<0<<endl;
        else if(sum%3==2)cout<<1<<endl;
        else{
            int flag=0;
            for(int i=0;i<n;i++){
                if(arr[i]%3==1)flag=1;
            }

            if(flag)cout<<1<<endl;
            else cout<<2<<endl;
        }
    }
}