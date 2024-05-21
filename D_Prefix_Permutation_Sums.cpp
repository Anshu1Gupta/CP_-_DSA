#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        
        cin>>n;
        n--;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int actual=n+1;

        unordered_set<int>set;
        for(int i=1;i<=actual;i++)set.insert(i);

        unordered_map<int,int>mp;
        int prev=0;
        for(int i=0;i<n;i++){
           mp[arr[i]-prev]++;
           

           if(set.find(arr[i]-prev)!=set.end())set.erase(arr[i]-prev);
           prev=arr[i];
        }
       
        cout<<set.size()<<endl;
        if(set.size()!=2)cout<<"NO"<<endl;
        else{
            int sum=0;
            for(auto it:set){
                sum+=it;
            }

            if(mp.find(sum)!=mp.end())cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }


        
    }
}