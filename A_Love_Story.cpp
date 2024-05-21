#include<bits/stdc++.h>
using namespace std;
// #define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        string str2="codeforces";
        int ans=0;
        int count =0;
        for(int i=0;i<str.length();i++){
    if(str[i]!=str2[i])count++;
        }
        cout<<count<<endl;

    }
}