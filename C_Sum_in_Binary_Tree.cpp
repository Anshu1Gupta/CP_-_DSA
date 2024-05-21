#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        while(n!=0){
            sum+=n;
            n=n/2;
        }
        cout<<sum<<endl;
    }
}