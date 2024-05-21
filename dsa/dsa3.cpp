#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int temp,end=6,start=0;
    
int arr[1000] = {0,1,2,3,4,5,6};
// while(start<=end){
//     swap(arr[start],arr[end]);
//     start++;
//     end--;
// }
 
for (int  i = 0; i <=6 ; i++)



{
    if (end>start)
{
    start = i;
    end = 6-i;
  temp = arr[start];
  
  arr[start] = arr[end];
  arr[end] = temp;

}
}
    
for (int i = 0; i < 7; i++)
{
    cout<<" "<<arr[i];
}
  
}




