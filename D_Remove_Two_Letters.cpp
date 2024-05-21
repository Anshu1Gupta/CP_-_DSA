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
    for(int i=0;i<n-2;i++){
        if(str[i]==str[i+2]){
            continue;
        }
        else ans++;
    }
    cout<<ans+1<<endl;
}
}