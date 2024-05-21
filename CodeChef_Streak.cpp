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
        int n;
        cin>>n;
        int om[n],addy[n];
        for(int i=0;i<n;i++)cin>>om[i];
        for(int i=0;i<n;i++)cin>>addy[i];
int o=0;
int ommax=0;
for(int i=0;i<n;i++){
    if(om[i]!=0)o++;
    else{
        o=0;
    }
        ommax=max(ommax,o);

}
int a=0;
int admax=0;
for(int i=0;i<n;i++){
    if(addy[i]!=0)a++;
    else{
        a=0;

    }
        admax=max(admax,a);

}
if(admax>ommax)cout<<"Addy"<<endl;
else if(admax==ommax)cout<<"Draw"<<endl;
else cout<<"Om"<<endl;
    }
}
               
