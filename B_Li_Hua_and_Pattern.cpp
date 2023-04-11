

#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        // cout<<k<<endl;
        int p=n-1;
              int f1=0;
   vector<vector<int>>arr(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1)f1=1;
            }
        }
        int flag=0;
  
   int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
              if((arr[i][j]==0&&arr[p-i][p-j]!=0)){
                  k--;
              }
             
              }
          
            }
            // cout<<count<<endl;
        //   count=count/2;
         if(k<0)cout<<"NO"<<endl;
          else{

            if(n%2==1)cout<<"YES"<<endl;
            else if(k%2==1)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
          }
        }
      






    }
//     100

