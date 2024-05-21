#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
// int n,i;
// cout<<"enter a number"<<endl;
// cin>>n;
// for (int i = 2; i < n; i++)
// {
//    if(n%i==0){
//     cout<<"number is not prime";
//      break;
//    }
//   else{
//     cout<<" prime";
//     break;
//   }
// }

// int n,z;
// cout<<"Enter a number"<<endl;
// cin>>n;
// for (int i = 0; i < n; i++)
// {
//     z = 3*i +7;
//     cout<<" "<<  z    ;
int max,temp;
int arr[10]={0,1,2,3,4,5,6,7};
max = arr[0];
for (int i = 1; i <10; i++)
{
   
   if(arr[i]>max){
      arr[i] == max;
   }
}
cout<<max<<endl;

return 0;
}