#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        string str;
        for(int i=0;i<k;i++){
            str+='a'+i;
        }
        string ans;
        while(n--){
            ans+=str;
        }
        cout<<ans<<endl;

        
    }
}
