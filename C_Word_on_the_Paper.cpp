#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){

   int t;
   cin>>t;
   while(t--){
      vector<vector<char>>arr(8,vector<char>(8,0));

      for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>arr[i][j];
        }
      }

string str;
      for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
         if(arr[i][j]!='.'){
            str+=arr[i][j];
         }
        }
      }

      cout<<str<<endl;
   }
}