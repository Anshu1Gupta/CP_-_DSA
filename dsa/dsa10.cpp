#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int firstocc(int even[], int n, int key){
    int s = 0 , e = n-1,ans;
    int mid = (s+e)/2;
    while(s<=e){
           mid = (s+e)/2;
        if(even[mid]==key){
             ans = mid;
            e = mid - 1 ;
        }
        else if(even[mid]>key){
              e = mid - 1 ;
        }
         else if(even[mid]<key){
              s = mid  + 1 ;
        }
      
       

    }
     return ans;
}
int lastocc(int even[], int n, int key){
    int s = 0 , e = n-1,ans;
    int mid = (s+e)/2;
    while(s<=e){
          mid = (s+e)/2;
        if(even[mid]==key){
             ans = mid;
            s = mid + 1 ;
        }
        else if(even[mid]>key){
              e = mid - 1 ;
        }
         else if(even[mid]<key){
              s = mid  + 1 ;
        }
        
       

    }
    return ans;
}
int main() {
    int even[10] = {1,2,3,3,5};
    cout<<"first occurence is at "<<firstocc(even,5,3)<<endl;
    cout<<"last occurence is at "<<lastocc(even,5,3)<<endl;
return 0;
}