#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
int arr[100] = {0,1,2,3,4,5,6,7,8};

int mid,start,end,key;
cout<<"enter the value of key";
cin>>key;
start = 0;
    end = 8;

    int flag = 1;
    while (start<=end)
    {
        
        mid = (start + end) /2;
    
 if(arr[mid]==key){
    int flag= 0;
        cout<<" number is found "<<endl;
        break;
    }
    else if(arr[mid]>key){
        end=mid - 1;
        

    }
    else if (arr[mid]<key) {
        start = mid + 1;
    }
    

    }
    if (flag==1){
        cout<<"not found";
    }
    
    

return 0;
}