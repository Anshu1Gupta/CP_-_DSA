#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin>>n;

    vector<int>arr(30,0);
    for(int i=0;i<n;i++){
        int t,v;
        cin>>t>>v;

        if(t==1){
            arr[v]++;
        }
        else{
            int w;
            // cin>>w;
            w=v;
           for(int i=29;i>=0;i--){
            int value=min(w>>i,arr[i]);
            w=w-(value<<i);
           }

           cout<<(w==0?"YES":"NO")<<endl;
        }
    }
}