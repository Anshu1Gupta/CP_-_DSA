#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int flag=0;
    while(true){
        int sum=(i)*(i+1)/2;
        if(sum==n){
            flag=1;
        }
        if(sum>n)break;
        i++;
    }
    if(flag==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}