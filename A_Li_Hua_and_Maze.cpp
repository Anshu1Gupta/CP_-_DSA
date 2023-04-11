#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1==1&&y1==1|| x1==n&&y1==m||x2==n&&y2==m||x2==1&&y2==1||x1==1&&y1==m||x1==n&&y1==1||x2==1&&y2==m||y2==1&&x2==n)cout<<2<<endl;
        else if(x1==1||y1==m||x1==n||y1==1||x2==n||y2==1||x2==1||y2==m)cout<<3<<endl;
        else cout<<4<<endl;
    }
}