#include<bits/stdc++.h>
using namespace std;
#define int long long
int canPlace(int height,vector<int>&h){
        int m1=-1;
        int m2=-1;
        vector<int>arr=h;
        arr.insert(arr.begin(),height);
        arr.push_back(height);
        for(int i=0;i<arr.size();i++){
            arr[i]=min(arr[i],height);
        }
        int n=arr.size();
        vector<int>left(n),right(n);
        for(int i=0;i<n;i++){
            m1=max(m1,arr[i]);
            m2=max(m2,arr[n-(i+1)]);
            left[i]=m1;
            right[n-(i+1)]=m2;
        }
       
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans+min(left[i],right[i])-arr[i];
        }
        return ans;
    }
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,water;
        cin>>n>>water;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];

        int low=1;
        int high=1e10;

        while(low<=high){
            int mid=(low+high)/2;
            
            if(canPlace(mid,arr)<=water){
                low=mid+1;
            }
            else high=mid-1;
        }

        cout<<low-1<<endl;
    }
}   