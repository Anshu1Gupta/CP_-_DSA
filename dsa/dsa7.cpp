#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
int arr[] = {1,2,3,4,5};
int z = 6;
for (int i = 0; i < 6; i++)
{
    for (int j  = i+1; j  < 6; j++)
    {
        for (
             int k = j+1; k < 6; k++)
        {
           cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;

           if(arr[i]+ arr[j]+ arr[k]==z){
            cout<<"triplet sum is there "<<endl;
           }

           else{
            cout <<"no triple sum  "<<endl;
           }

           }
        }
        
    }
    
}

