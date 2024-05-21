#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){

    int t;
    cin>>t;
    while(t--){
        int x,y,n;
        cin>>x>>y>>n;

        int diff=y-x;
        int len=n-1;
        
        int sum=(len)*(len+1)/2;
        if(sum>diff||(y-x)<=0){
            cout<<-1<<endl;
        }else{
             unordered_map<int,int>mp;
             int flag=0;
            vector<int>ans(n);
            ans[0]=y;
            int i=1;
            for( ;i<=(len)-1;i++){
                ans[i]=ans[i-1]-i;
            }
            ans[n-1]=x;


            for(int i=0;i<n;i++){
                mp[ans[i]]++;
                if(mp[ans[i]]>=2)flag=1;
            }
            if(flag==1)cout<<-1<<endl;
            else{
                for(int i=n-1;i>=0;i--){
                    cout<<ans[i]<<' ';
                }cout<<endl;
            }

        }
        



    }
}