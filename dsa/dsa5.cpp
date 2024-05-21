#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
int arr[100] = {0,1,2,3,4,5,6,7};
int sum[100] = {0,1,2,3,4,5,6,7};
int z = 5;
for (int i = 0; i <9; i++)
{
    for (int j = 0; j < 9; j++)
    {
        if (arr[i] + sum[j] ==z)
        {
            cout<<"pair sum is found"<<endl;
        }
        
        else{
            cout<<"pair sum is not found"<<endl;
        }
    }
    
}

return 0;
}