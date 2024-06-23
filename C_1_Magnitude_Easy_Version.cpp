#include<bits/stdc++.h>
using namespace std;
int main(){
    
int t;
cin>>t;
while(t--){
    long long n;
    cin>>n;
    long long arr[n];

    long long sum=0,mini=0;

    for(long long i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        mini=min(mini,sum);
    }
    cout<<sum-2*mini<<endl;
}
}