#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
 int n ,size,s,e,mid;
 cout<<"enter the numebr ";
 cin>>n;
//  int arr[n];
//  for (int i = 0; i < n; i++)
//  {
//    arr[i]=i+1;
//  }
 
 s =0 ;
 e = n-1;
 int ans=-1;
 while(s<=e){
    mid = (s+e)/2;

    if(mid*mid==n){
       ans=mid;
        break;
    }
    else if(mid*mid<n){
        s=mid+1;
    }
    else{
        e= mid-1;
    }
 }
 if(ans == -1 ){
    cout<<"the root is not possible";
 }
 else
 cout<<"the square root of the number "<< n << " is "<<ans<<endl;

return 0;
}