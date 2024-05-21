#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    t=1 ;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];

        int sum=0;
        int prev=0;
        int next=0;
        int len=0;
        while(next<n){
            sum+=arr[next];

            while(sum>k){
                sum-=arr[prev];
                prev++;
            }

            len=max(len,next-prev+1);
            next++;
        }
        cout<<len<<endl;
    }
}