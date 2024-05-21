#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        unordered_map<char,int>mp;
        int n=str.size();
        int m=0;
        for(int i=0;i<n;i++){
            if(mp.find(str[i])==mp.end()){
                mp[str[i]]++;
            }
            else{
                mp.clear();
                m+=2;
            }
        }
        cout<<n-m<<endl;
    }
}