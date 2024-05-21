#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string ans="zzz";
        for(char x='a';x<='z';x++){
            for(char y='a';y<='z';y++){
                for(char z='a';z<='z';z++){
                    int a=x-'a'+1;
                    int b=y-'a'+1;
                    int c=z-'a'+1;
                    string str;
                    str+=x;
                    str+=y;
                    str+=z;
                    if(n==(a+b+c) && str<ans){
                        ans=str;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}