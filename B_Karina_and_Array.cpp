#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        vector<int>pos,neg;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                pos.push_back(arr[i]);
            }
            else{
                neg.push_back(arr[i]);
            }
        }
        sort(pos.begin(),pos.end(),greater<>());
        sort(neg.begin(),neg.end());
        // cout<<1<<endl;
        if(pos.empty()){
            cout<<neg[0]*neg[1]<<endl;
        }
        else if(neg.empty()){
            cout<<pos[0]*pos[1]<<endl;
        }
        else if(pos.size()==1&&neg.size()==1){
            cout<<pos[0]*neg[0]<<endl;
        }
        else{
            // int maxi=-1e18;
            if(pos.size()>=2&&neg.size()<=1){
                cout<<pos[0]*pos[1]<<endl;
            }
            else if(neg.size()>=2&&pos.size()<=1){
                cout<<neg[0]*neg[1]<<endl;
            }
            else {
                int maxi=pos[0]*pos[1];
                int maxi2=neg[0]*neg[1];
                cout<<max(maxi,maxi2)<<endl;
            }


        }
    }
} 
