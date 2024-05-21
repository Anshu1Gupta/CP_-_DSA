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
        
        int countf=1;
        int countl=1;

        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                countf++;
            }
            else{
                break;
            }
        }
        for(int i=n-2;i>0;i--){
            if(arr[i]==arr[i+1]){
                countl++;
            }
            else{
                break;
            }
        }
        int first=arr[0];
        int last=arr[n-1];
        sort(arr,arr+n);

        if(arr[0]==arr[n-1])cout<<0<<endl;
        else if(first==last){
            int ans=countf+countl;
            cout<<n-ans<<endl;
        }
        else{
            cout<<n-max(countf,countl)<<endl;
        }
    }
}