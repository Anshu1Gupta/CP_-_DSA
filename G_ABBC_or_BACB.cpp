#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
   int t;
   cin>>t;
   while(t--){
    string str;
    cin>>str;
    
    int countA=0;
    int xb=0;
    int flb=0;
    int n=str.size();
    if(str[0]=='B'||str[n-1]=='B')flb=1;

    for(int i=0;i<n-1;i++){
        if(str[i]=='B'&&str[i+1]=='B')xb=1;
    }

    int consA=0;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){

        if(str[i]=='A'){
            countA++;
            consA++;
        }
        else{
            mini=min(consA,mini);
            consA=0;
        }
    }
    mini=min(consA,mini);

    if(xb|flb)cout<<countA<<endl;
    else{
        cout<<countA-mini<<endl;
    }

    
}
}