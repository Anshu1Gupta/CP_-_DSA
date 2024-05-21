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
        int arr[n];
        vector<int>dummy;

        for(int i=0;i<n;i++){
            cin>>arr[i];
            int x=arr[i]&k;
            if(x==k){
                
                dummy.push_back(arr[i]);
            }
        }
        if(dummy.size()==0)cout<<"NO"<<endl;
        else{
            int x=dummy[0];
            for(int i=0;i<dummy.size();i++){
                x=x&dummy[i];
            }
           
           
            if(x==k)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}