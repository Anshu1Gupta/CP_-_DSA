#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str1,str2,str3;
        cin>>str1>>str2>>str3;
        unordered_map<char,int>mp;

        for(int i=0;i<str1.size();i++){
            if(str1[i]!='?')
                mp[str1[i]]++;
        }
        for(int i=0;i<str2.size();i++){
            if(str2[i]!='?')
                mp[str2[i]]++;
        }
        for(int i=0;i<str3.size();i++){
            if(str3[i]!='?')
                mp[str3[i]]++;
        }

       for(auto it:mp)
       {
            if(it.second==2)cout<<it.first<<endl;
       }
       

       
    }
}