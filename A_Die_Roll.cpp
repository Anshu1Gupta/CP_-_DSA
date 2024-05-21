#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int count=0;
if(6>=a&&6>=b)count++;
if(5>=a && 5>=b)count++;
if(4>=a && 4>=b)count++;
if(3>=a && 3>=b)count++;
if(2>=a && 2>=b)count++;
if(1>=a && 1>=b)count++;

if(count==1)cout<<"1/6"<<endl;
if(count==2)cout<<"1/3"<<endl;
if(count==3)cout<<"1/2"<<endl;
if(count==4)cout<<"2/3"<<endl;
if(count==5)cout<<"5/6"<<endl;
if(count==6)cout<<"1/1"<<endl;
return 0;
}