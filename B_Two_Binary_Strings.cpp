#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str1,str2;
        cin>>str1>>str2;
        int n=str1.size();
        int flag=0;
        for(int i=0;i<n-1;i++){
           if(str1[i]==str2[i]&&str1[i]=='0'&&(str1[i+1]==str2[i+1]&&str1[i+1]=='1')){
            flag=1;
           }
        }
        if(flag==1)cout<<"YES"<<endl;

        else cout<<"NO"<<endl;
    }
}