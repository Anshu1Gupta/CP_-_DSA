#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int n;
    cin>>n;
    vector<int>ans;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a==1)ans.push_back(i);
    }
    int res=1;
    if(ans.size()>1){
        for(int i=1;i<ans.size();i++){
            int diff=ans[i]-ans[i-1];
            res=res*diff;
        }
    }
    else if(ans.size()==0)res=0;
    cout<<res<<endl;
}