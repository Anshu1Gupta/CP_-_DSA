#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char  arr[n][n];
        int flag=-1;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               cin>>arr[i][j];
               if(flag==-1 && arr[i][j]=='1'){
                flag=i;
               }
            }
        }

        int count=0;
        for(int i=0;i<n;i++){
           if(arr[flag][i]=='1')count++;
        }
        int count2=0;
        for(int i=0;i<n;i++){
            if(arr[flag+1][i]=='1')count2++;
        }
        // cout<<count<<' '<<count2<<' ';
        if(count!=count2)cout<<"TRIANGLE"<<endl;
        else cout<<"SQUARE"<<endl;
    }
}