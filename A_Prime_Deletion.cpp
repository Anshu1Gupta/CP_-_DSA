#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int three=-1;
        int one=-1;
        for(int i=0;i<str.size();i++){
            if(str[i]=='3')three=i;
            if(str[i]=='1')one=i;
        }
        if(three>one)cout<<13<<endl;
        else{
            cout<<31<<endl;
        }
    }
}