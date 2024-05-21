#include<iostream>
using namespace std;
int func(int a , int b){
     int ans = 1;
for (int  i = 0; i < b; i++)
{
   
   ans=ans*a;
}
return ans;
}

int main() {
    int a,b,ans = 1,kk;
cout<<"enter the value of hte number";
cin>>a>>b;

kk =func(a,b);

cout<<kk;

cout<<"here the answer";
return 0;
}