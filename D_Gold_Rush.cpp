#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n==k)cout<<"YES"<<endl;
        else if(n<k||n%3!=0)cout<<"NO"<<endl;
        
        else{
            int flag=0;
             queue<int>q;
             q.push(n);
             while(!q.empty()){
                int node=q.front();q.pop();
               
                    int x=node/3;
                    int y=2*x;
                    if(x==k||y==k){
                        flag=1;
                        break;
                    }
                    if(x%3==0&&x>k){
                        q.push(x);
                    }
                    if(y%3==0&&y>k){
                        q.push(y);
                    }

                
             }
             if(flag==1)cout<<"YES"<<endl;
             else  cout<<"NO"<<endl;
        }
    }
}