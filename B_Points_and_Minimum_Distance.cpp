#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    n=2*n;

    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    sort(arr,arr+n);
    priority_queue<int,vector<int>,greater<int>>;
  }
}