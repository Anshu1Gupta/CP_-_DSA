#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
int arr[5] = {64,25,12,22,11};
int temp;
int t= 5;
while(t--){
for (int  i = 0; i < 4; i++)
{
    
    if (arr[i] >arr[i + 1])
{
    swap(arr[i],arr[i + 1]);
}

}
}

for (int i = 0; i < 5; i++)
{
   cout<<arr[i]<<" ";
}

return 0;
}