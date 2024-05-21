#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fac(int x){
int z = 1;
    
for (int i = 1; i <= x; i++)
{
    z=z*i;

}
return z;
}
int ncr(int x,int y){
   int num  = fac(x);
   int  deno = fac(y)*fac(x-y);
    return  num/deno;
}



int main() {
    int n,r;
    cout<<"enter the value of the number"<<endl;
    cin>>n>>r;
int ans = fac(n);
int an = ncr(n,r);
cout<<an;
return 0;
}