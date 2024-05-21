#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int result=0;
        int ans=0;
        while(n--){
            int a;
            cin>>a;
            if(a==0){
                ans++;
              result=max(ans,result);
            }
            else{
                ans=0;
            }
        }
        cout<<max(result,ans)<<endl;
    }
}