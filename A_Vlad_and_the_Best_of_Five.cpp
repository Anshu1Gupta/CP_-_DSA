#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;

        int c=0;
        for(int i=0;i<str.size();i++){
            if(str[i]=='A')c++;
        }
        int a=c;
        int b=str.length()-c;

        if(a>b)cout<<"A"<<endl;
        else cout<<"B"<<endl;

    }
}