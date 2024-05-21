#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
int arr[100] = {0,1,2,3,4,5};
int sum[100] = {1,4,66,77,5,2};
for (int i = 0; i < 7; i++)
{
    for (int j = 0; j < 7; j++)
    {
     if (arr[i]==sum[j])
     {
        cout<<"element is same "<<arr[i]<<" "<<sum[j]<<endl;
     }
     else{
        cout<<"not same"<<endl;
     }
    }
    
}

return 0;
}