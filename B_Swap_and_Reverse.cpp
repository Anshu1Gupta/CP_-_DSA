#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        if(k%2==0){
            sort(str.begin(),str.end());
        }
        else{
            vector<char>odd,even;
            for(int i=0;i<n;i++){
                if(i%2==0){
                    even.push_back(str[i]);
                }
                else{
                    odd.push_back(str[i]);
                }
            }
            sort(odd.begin(),odd.end(),greater<>());
            sort(even.begin(),even.end(),greater<int>());
            // reverse(odd.begin(),odd.end());
            
            for(int i=0;i<n;i++){
                if(i%2==0){
                    str[i]=even.back();
                    even.pop_back();
                }
                else{
           str[i]=odd.back();
           odd.pop_back();
                }
            }

          
        }
        cout<<str<<endl;
    }
}