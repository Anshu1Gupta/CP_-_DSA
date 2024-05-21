#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],brr[n];
        int a=0,b=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1)a++;
        }
        for(int i=0;i<n;i++){
            cin>>brr[i];
            if(brr[i]==1)b++;
        }
         int flag=0;
         for(int i=0;i<n;i++){
            if(arr[i]!=brr[i]){
                flag=1;
                break;
            }
         }
        if(flag==0)cout<<0<<endl;
        else if(a==b){
            cout<<1<<endl;
        }
        else if(a<b){
            int diff=b-a;
            for(int i=0;i<n;i++){
                if(arr[i]==1&&brr[i]==0){
                    diff++;
                    break;
                }
            }
            cout<<diff<<endl;
        }
        else{
            int diff=a-b;
            for(int i=0;i<n;i++){
                if(arr[i]==0&&brr[i]==1){
                    diff++;
                    break;
                }
            }
            cout<<diff<<endl;
        }
    }
}