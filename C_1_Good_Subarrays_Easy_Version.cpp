#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0)arr[i]--;
        }
        unordered_map<int,int>mp;
        int ans=0;
        int sum=0;

        for(int i=0;i<k;i++){
            mp[arr[i]]++;
            sum+=arr[i];
        }
        if(mp.size()==k)ans=sum;
        int p=0;

        for(int i=k;i<n;i++){
            mp[arr[p]]--;
            sum-=arr[p];
            if(mp[arr[p]]==0)mp.erase(arr[p]);
            p++;
            mp[arr[i]]++;
            sum+=arr[i];

            if(mp.size()==k)ans=max(ans,sum);
        
        }
        cout<<ans<<endl;


        

    }
