#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int v,c,nv,nc;
        cin>>v>>c>>nv>>nc;
    int k;
    if(v>c){k=v;v=c;c=k;}
    if(v<nc){printf("No\n");continue;}
    if(v+c<nv+nc){printf("No\n");continue;}
    printf("Yes\n");
    }
}