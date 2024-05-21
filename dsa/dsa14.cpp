#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int ifpos(int arr[],int m , int mid){
    int studentcount = 1;
    int pagesum = 0;
    for (int i = 0; i < 3; i++)
    {
        if (pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            studentcount++;
            if
                (studentcount >m ||arr[i]> mid){
                    return false;

                }
                pagesum = arr[i];
            
        }
    }
    
}
int main() {

int arr[4]={10,20,30,40};
int s= 0,sum=0,m=2,ans;
for (int i = 0; i <4 ; i++)
{
  sum+=arr[i];
}
 
int e = sum;
 ans = -1;
 int mid = (s+e)/2;
while(s<=e){
    int ans = ifpos(arr,m,mid);
    if(ans){
    ans = mid;
    e = mid -1;
     
    }
    else{

    s = mid +1;
    }
    mid = (s+e)/2;
    

    }
    cout <<ans;
}
