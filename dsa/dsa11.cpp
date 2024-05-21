#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
// int  arr[10] = {0,1,2,3,1,0};
// int s=0,e=5;
// int mid = (s+e)/2;
// while(s<e){
//     mid = (s+e)/2;
//     if(arr[mid]<arr[mid+1]){
        
//         s= mid +1;
        
//     }
//     else{
//         e=mid;
//     }
// }

int s = 0,e = 4,mid;
int arr[10] ={7,9,1,2,3};
while(s<e){
    mid = (s+e)/2;
    if(arr[mid]>=arr[0]){
        
        s= mid +1;
        
    }
    else{
        e=mid ;
    }
}
cout<<s;

 return 0;
}