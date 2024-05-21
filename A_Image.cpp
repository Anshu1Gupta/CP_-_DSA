#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        string str1,str2;
        cin>>str1>>str2;
        unordered_map<char,int>mp;
        for(int i=0;i<str1.length();i++){
            mp[str1[i]]++;
        }
        for(int i=0;i<str2.length();i++){
            mp[str2[i]]++;
        }
        cout<<mp.size()-1<<endl;
    }
}