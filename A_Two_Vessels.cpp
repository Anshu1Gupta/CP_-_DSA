#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
    cin>>a>>b>>c;

    int ab=abs(a-b);
    int x=2*c;
    cout<<ceil((ab)/(x*1.0))<<endl;
    }
}