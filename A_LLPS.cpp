#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;

    unordered_map<char,int>mp;

    char c='a';
    for(int i=0;i<str.size();i++){
       c=max(c,str[i]);
       mp[str[i]]++;
    }

    while(mp[c]--){
        cout<<c;
    }
    cout<<endl;
}
