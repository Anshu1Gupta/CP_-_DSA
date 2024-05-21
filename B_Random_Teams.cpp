#include<bits/stdc++.h>
using namespace std;
#define int long long
int maximum(int n,int k){
    int size=k-1;
    n=n-size;

    return (n*(n-1))/2;
}
int minimum(int n,int k){
    int unif=n/k;
    int rem=n%k;

    if(rem==0){
        return  k*(unif*(unif-1)/2);
    }
    else{
        int val= rem*((unif+1)*(unif)/2);
        int val2= (k-rem)*(unif*(unif-1)/2);

        return val+val2;
    }


}
signed main(){
    int n,k;
    cin>>n>>k;

    
    int mini=minimum(n,k);
    int maxi=maximum(n,k);
    cout<<mini<<' '<<maxi<<endl;


}