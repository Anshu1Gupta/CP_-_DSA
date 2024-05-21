#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int prom(int arr[],int mid, int m){
    int page = 0;
    int painter = 1;
    for (int i = 0; i < 4; i++)
    {
        if( page = page+arr[i] <= mid){
            page=page+arr[i];
        }
        else{
            painter++;
            if(painter>m||arr[i]>mid){
            return false;
            }
            page=0;
            page=arr[i];

        }
    }
    
}
int main() {
int arr[4]={5,5,5,5};
int sum = 0;
for (int i = 0; i < 4; i++)
{
    sum = sum + arr[i];
}
int s = 0,e=sum,mid,m,ans=-1 ;
mid = (s+ e)/2;
while (s<=e)
{
    prom(arr,mid,m);
   if( prom(arr,mid,m)){
    ans = mid;
    e = mid -1;
   }
   else{
    s = mid +1;
   }
}
cout<<ans;



mid = (s+ e)/2;
return 0;
}