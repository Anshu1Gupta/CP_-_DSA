#include<bits/stdc++.h>
using namespace std;

int isPossible(int num,int n,int k){
    int q=n/num;
    int r=n-(q*num);

    if(q<=k&&(r%num)==0)return true;
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        int high=n/k;

        int low=1;

        while(low<=high){
            int mid=(low+high)/2;

            if(isPossible(mid,n,k)){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

        cout<<high<<endl;
    }
}