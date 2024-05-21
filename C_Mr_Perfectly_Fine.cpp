#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int onezero=1e8;
        int zeroone=1e8;
        int oneone=1e8;
        int n;
        cin>>n;
        while(n--){
            int a;
            string b;
            cin>>a>>b;
            if(b=="01"){
                zeroone=min(zeroone,a);
            }
            if(b=="10"){
                onezero=min(onezero,a);

            }
            if(b=="11"){
                oneone=min(oneone,a);
            }
        }
       if(zeroone==1e8&&oneone==1e8||onezero==1e8&&oneone==1e8)cout<<-1<<endl;
       else{
        cout<<min(oneone,zeroone+onezero)<<endl;
       }
    }
}