#include<bits/stdc++.h>
using namespace std;
// #define int long long


signed main(){
    map<int,int>set;
    for(int i=2;i<=1000;i++){
        int k=i+1;
        int val=i*i;
        for(int l=2;l<=20;l++){
           k+=val;

           if(k>1e6)break;
           set[k]++;
           val=val*i;
        }
    }
    int t;
    cin>>t;
    while(t--){

        vector<int>arr;
        int n;
        cin>>n;

        if(set.count(n))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        }
    
}