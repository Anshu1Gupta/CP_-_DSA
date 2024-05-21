#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ans;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                ans.push_back(i);
                
                n=n/i;
                if(ans.size()==2)break;
            }
        }
        if(ans.size()<2)cout<<"NO"<<endl;
        else if(ans[0]==n||ans[1]==n)cout<<"NO"<<endl;
        else cout<<"YES\n"<<ans[0]<<' '<<ans[1]<<' '<<n<<endl;
    }
}