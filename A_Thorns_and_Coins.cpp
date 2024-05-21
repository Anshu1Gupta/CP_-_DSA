#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;


        int ans=0;
        for(int i=0;i<n;i++){
            if(str[i]=='*'){
                if(i+1<n && str[i+1]=='*')break;
            }
            else if(str[i]=='@'){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}