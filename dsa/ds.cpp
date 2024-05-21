#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool search(int arr[], int size, int key){
for (int i = 0; i < 10; i++)
{
    if (arr[i] == key)
    {
        return 1;
    }
  

}
return 0;
}
int main() {
int i;
int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};
cout<<"enter hte value off hte key"<<endl;
int key;
cin>>key;
 
bool found = search(arr,10,key);
if(found){
        cout<<"key found "<<endl;
}
else{
    cout<<"not found";
}
return 0;
}