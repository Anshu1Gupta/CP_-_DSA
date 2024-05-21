#include<bits/stdc++.h>
using namespace std;
#define int long long
int mod=1e9+7;
bool isVowel(char x){
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')return true;
    return false;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        int count=0;
        int start=0;
        vector<pair<int,int>>ans;
        for(int i=0;i<n;i++){
            if(isVowel(str[i])){
                count++;
                if(count==1){
                    start=i;
                }
            }

             if(count==k){
                    ans.push_back({start,i});
                    count=0;
            }
                
        }
       int ans1=1;
       for(int i=0;i<ans.size()-1;i++){
        int x=-ans[i].second+ans[i+1].first;
        ans1=(ans1*x)%mod;
       }
       cout<<ans1<<endl;


    }
}