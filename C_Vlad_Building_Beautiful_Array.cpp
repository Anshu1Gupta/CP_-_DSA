#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
     int n;
    cin>>n;
    int arr[n];
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==1)flag=1;
    }
   sort(arr,arr+n);
   if(flag==0)cout<<"YES"<<endl;
   else if(arr[0]%2==1)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

   }
}   