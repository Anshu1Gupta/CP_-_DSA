#include<bits/stdc++.h>
using namespace std;
 #define int long long 
signed main(){
    int t;
    cin>>t;
    while(t--){
        int  n;
        cin>>n;
        int arr[n];
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        int count=0;
        for(auto it:arr){
            int num=it;
            int find=(INT_MAX)^num;
            
            if(mp.find(num)==mp.end()) continue;

            if(mp.find(num)!=mp.end()&&mp.find(find)!=mp.end()){
                int mini=max(mp[find],mp[num]);
                count+=mini;
                mp.erase(num);
                mp.erase(find);
            }
            else{
                count+=mp[num];
                mp.erase(num);
            }
        }
        cout<<count<<endl;
    }
}