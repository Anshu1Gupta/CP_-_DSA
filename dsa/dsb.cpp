#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int temp;
int arr[100] = {0,1,2,3,4,5,6,7};
for (int i = 0; i <=7;)
{
   temp = arr[i];
   arr[i] = arr[i+1];
   arr[i+1] = temp;
   i = i+2;
}
 for (int i = 0; i <8; i++)
 {
    cout<<arr[i]<<" ";
 }
 
return 0;
}