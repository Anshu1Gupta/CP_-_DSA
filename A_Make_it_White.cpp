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
        int l=-1;
        int r=-1;

        for(int i=0;i<n;i++){
            if(str[i]=='B'){
                l=i;
                break;
            }
        }
        for(int j=n-1;j>=0;j--){
            if(str[j]=='B'){
                r=j;
                break;
            }
        }
        if(l==-1&&r==-1)cout<<0<<endl;
        else cout<<(r-l+1)<<endl;
    }
}