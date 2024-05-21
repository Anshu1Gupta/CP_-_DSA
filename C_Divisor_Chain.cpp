#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ans;
        ans.push_back(n);

        while(__builtin_popcount(n)>1){
            int count=1;

            while(true){
                count=count*2;

                if(n%count){
                    count/=2;
                    break;
                }
            }
            n-=count;
            cout<<count<<' ';
            ans.push_back(n);
        }

        while(n>1){
            ans.push_back(n/2);
            n/=2;
        }
        cout<<ans.size()<<endl;
        for(auto it:ans)cout<<it<<' ';
        cout<<endl;
    }
}