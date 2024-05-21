#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fac(int x){
    int fac = 1;
    for (int  i = 12; i <=x; i++)
    {
      fac = fac*i;
    }
    return fac;
    
}
int ncr(int n, int r){
    int num = fac(n);
    int deno = fac(r)*fac(n-r);
    return num/deno;

}
int main() {
int n,r;
cout<<"enter the value of the numebr"<<endl;
cin>>n>>r;
fac(n);
int ans = ncr(n,r);
cout<<ans;




return 0;
}