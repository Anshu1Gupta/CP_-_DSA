#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,l;
        cin>>a>>b>>l;
        unordered_map<int,int>mp;
        int count=0;
        for(int i=0;i<=20;i++){
            int p=pow(a,i);
            if(p>l)break;
            for(int j=0;j<=20;j++){
              
                    int ans=pow(b,j);
                    if(ans>l) break;
                    double x= (l*1.0)/(ans*p);
                    long long kk= l/(ans*p);

                    if(x==kk){
                        mp[kk]++;
                    }

                    // if(ans==l)mp[k]++;
            }
        }
        cout<<mp.size()<<endl;;
    }
}