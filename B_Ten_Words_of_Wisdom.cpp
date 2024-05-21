#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ind,maxi=-1;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;

            if(a<=10){
                if(b>maxi){
                    maxi=b;
                    ind=i+1;
                }
            }
        }
        cout<<ind<<endl;

    }
}