#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==3){
        cout<<1<<endl;
        cout<<3<<endl;
    }
    else{
        if(n%2==1){
            n=n-3;

            cout<<1+n/2<<endl;
            int count=n/2;
            cout<<3<<' ';
            while(count--){
               cout<<2<<' ';
            }cout<<endl;

        }
        else{
            int count=n/2;
            cout<<count<<endl;
            while(count--){
                cout<<2<<" ";
            }cout<<endl;
        }
    }
}