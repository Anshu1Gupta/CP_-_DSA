#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        if((str[0]=='Y'||str[0]=='y')&&(str[1]=='e'||str[1]=='E')&&(str[2]=='s'||str[2]=='S')){
            cout<<"YES"<<endl;
        }
      else cout<<"NO"<<endl;
    }
}