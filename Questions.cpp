#include<bits/stdc++.h>
using namespace std;
#define int long long

int case1(vector<int>&arr,int x){
    int n=arr.size();
    priority_queue<int,vector<int>,greater<int>>pq;

    for(int i=0;i<n;i++){
        if(pq.size()<x){
            pq.push(arr[i]);
        }
        else{
            if(pq.top()<arr[i]){
                pq.pop();
                pq.push(arr[i]);
            }
        }
    }
   int sum=0;
   while(!pq.empty()){
    sum+=pq.top();
    pq.pop();
   }
   return sum;
}
int case2(vector<int>&arr,int y){
    int n=arr.size();
    priority_queue<int,vector<int>,greater<int>>pq;
    

    int start=0;
    int end=1;
    while(end<n){
        int sum=arr[start]+arr[end];
        if(pq.size()<y){
            pq.push(sum);
        }
        else{
            if(pq.top()<sum){
                pq.pop();
                pq.push(sum);
            }
        }

        start++;end++;

    }
   int sum=0;
   while(!pq.empty()){
    sum+=pq.top();
    pq.pop();
   }
   return sum;
}
int case3(vector<int>&arr,int z){
    int n=arr.size();
    priority_queue<int,vector<int>,greater<int>>pq;
    int start=0;
    int mid=1;
    int end=2;
       while(end<n){
        int sum=arr[start]+arr[mid]+arr[end];
        if(pq.size()<z){
            pq.push(sum);
        }
        else{
            if(pq.top()<sum){
                pq.pop();
                pq.push(sum);
            }
        }

        start++;end++;mid++;

    }
    
   int sum=0;
   while(!pq.empty()){
    sum+=pq.top();
    pq.pop();
   }
   return sum;
}
int solve(vector<int>&arr,int x,int y,int z){

    int val1=case1(arr,x);
    int val2=case2(arr,y);
    int val3=case3(arr,z);

    int val= max(val1,max(val2,val3));
    return val;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x,y,z;
        cin>>x>>y>>z;
        vector<int>arr(n);
      for(int i=0;i<n;i++)cin>>arr[i];

        int ans=solve(arr,x,y,z);
        cout<<ans<<endl;
    }
}