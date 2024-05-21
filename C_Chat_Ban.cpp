#include<bits/stdc++.h>
using namespace std;
#define int long long
int binaryCall(int low,int high, int target){
        while(low<=high){
            int mid= low+(high-low)/2;

            int val= mid*(mid+1)/2;
            if(val==target)return mid;
            if(val<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
}
int binaryCallReverse(int low,int high, int target){
    int k=high;
    int sum=(k*(k+1))/2;
        while(low<=high){
            int mid= low+(high-low)/2;
            int val= (sum-(mid*(mid-1)/2));
            if(val==target)return k-mid+1;
            if(val<target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        low=max(1ll,low);
        return k-low+2;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int k,x;
        cin>>k>>x;
        int ans= (k*(k+1))/2;
        if(k==1)cout<<1<<endl;
        else if(x>= (ans+ (k*(k-1))/2)){
            cout<<2*k-1<<endl;
        }
        else if(ans>=x){
            cout<<binaryCall(1,k,x)<<endl;
        }
        else
        cout<<k+binaryCallReverse(1,k-1,x-ans)<<endl;
        

        

    }
}