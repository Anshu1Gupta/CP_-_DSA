#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,n;
    cin>>a>>b>>n;
//simons //other
    bool turn=true;
    while(true){

        if(n==0){
            if(turn){
                cout<<1<<endl;
                break;
            }
            else{
                cout<<0<<endl;
                break;
            }
        }
      if(turn==true){

        int num=__gcd(a,n);
        if(num>n){
            cout<<0<<endl;
            break;
        }
        n=n-num;
      }
      if(turn==false){
        int num=__gcd(b,n);
        if(num>n){
            cout<<1<<endl;
            break;
        }
        n=n-num;
      }
      turn=!turn;
    }
}