#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int temp;
int arr[10]= {0,1,0,1,1,0};
for (int i = 0; i < 6;i++ )
{
for (int j = 5; j >= i;j-- )
{
   if (arr[i]==1&&arr[j]==0)
   {
    swap(arr[i],arr[j]);
   }
//    else if (arr[i]==1&&arr[j]==0){
     
//    swap(arr[i],arr[j]);
//     i++;
//     j--;
//    }

   
}
 }
 
for (int i = 0; i < 6; i++)
{
cout << arr[i] << endl;
}





return 0;
}