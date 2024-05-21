#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
// int arr[100] = {1,2,4,5,7,2,4,7,1};
// int add = 0,count;
// // int sum[100] = {1,2,4,5,7,2,4,7,1};
// for (int i = 0; i < 9; i++)
// {
// int flag=0;
   
//     for (int j = 0; j < 9; j++)
//     {

//         if(i==j)continue;
        
//        int ans=arr[i]^arr[j];
//        if(ans==0){
        
//         flag = 0;
            // break;
//        }
//     }
//     if(flag==1){
//         cout<<arr[i]<<"unique elements"<<endl;
//     }
    
// }


int arr[100] = {1,2,4,5,7,2};
int add = 0,count;
// int sum[100] = {1,2,4,5,7,2,4,7,1};
for (int i = 0; i < 6; i++)
{
int flag=1;
   
    for (int j = 0; j < 6; j++)
    {

        if(i==j)continue;
        
       int ans=arr[i]^arr[j];
       if(ans==0){
        
       flag= 0;
       break;
       }
    }
    if(flag==0){
        cout<<arr[i]<<"is the duplicate element"<<endl;
        break;
    }
    
}

return 0;
}