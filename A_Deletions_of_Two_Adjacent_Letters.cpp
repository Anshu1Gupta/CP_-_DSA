#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        string str1;
        cin>>str1;
        char c;
        cin>>c;
        int flag=0;
        for(int i=0;i<str1.size();i++){
            if(str1[i]==c&&i%2==0)flag=1;
        }
        if(flag==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}