#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char k;
        cin>>n>>k;
        string num;
        cin>>num;
        int ind=-1;
        string ans;
        for(int i=0;i<n;i++){
            if(num[i]<=k){
               ind=i;
               ans=ans+k;
               break;
            }else{
                ans=ans+num[i];
            }
        }
        if(ind==-1){
            cout<<num<<k<<endl;
        }
        else{
            for(int i=ind;i<n;i++){
                ans=ans+num[i];
            }
            cout<<ans<<endl;
        }

    }
}