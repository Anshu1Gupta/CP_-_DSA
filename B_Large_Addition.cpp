#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long num;
        long long x;
        cin>>num;
        long long flag=0;
        x=num;
        while(num){
            if(num%10==9 || num<=9){
                flag=1;
                break;
            }
            num=( num/10 )-1;
        }
        // cout<<x<<' ';
        if(flag==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}