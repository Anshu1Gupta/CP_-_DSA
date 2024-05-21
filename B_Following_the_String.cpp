#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        unordered_map<char,int>mp;
        
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            if(num==0){
                char x;
                for(int i=0;i<26;i++){
                    x='a'+i;
                    if(mp.find(x)==mp.end()){
                        str+=x;
                        break;
                    }  
                }
                mp[x]++;
            }
            else{
                char x;
                for(int i=0;i<26;i++){
                    x='a'+i;
                    if(mp[x]==num){
                        str+=x;
                        break;
                    }
                    
                }
                mp[x]++;
            }

        }
        cout<<str<<endl;
    }
}