#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
int arr[6] = {12,2,34,5,3,10};
for (int i = 0; i <= 4; i++)
{
    int min = i;
    for (int  j = i+1; j <=5; j++)
    {
        if (arr[j] < arr[min]){
        min = j;
        
        }
        swap(arr[min],arr[i]);
    }
    
}
for (int i = 0; i < 6; i++)
{
   cout<<arr[i]<<" ";
}


return 0;
} 