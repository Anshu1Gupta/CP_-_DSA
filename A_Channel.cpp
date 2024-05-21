#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,q;
        cin>>n>>a>>q;

        string str;
        cin>>str;
        
        int c=0;
        int plus=0;
        for(int i=0;i<str.length();i++){
            if(str[i]=='+')plus++;
            if(str[i]=='-')c--;
            else c++;
        }

        if(a>=n)cout<<"YES"<<endl;
        else if(a+plus<n)cout<<"NO"<<endl;
        else{
            if(a+c>=n)cout<<"YES"<<endl;
            else if(a+plus>=n)cout<<"MAYBE"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}