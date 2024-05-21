#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;

        int sum1=str[0]+str[1]+str[2];
        int sum2=str[3]+str[4]+str[5];

        if(sum1==sum2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}