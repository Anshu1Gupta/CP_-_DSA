#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        if(a%2==0&&b%2==0)cout<<"Yes"<<endl;
        else if(a==b*2 || b==a*2)cout<<"No"<<endl;
        else if(a%2==0||b%2==0)cout<<"Yes"<<endl;
        else{
            cout<<"No"<<endl;
        }
    }
}