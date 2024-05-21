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

        vector<int>prefix(n);
        vector<int>suffix(n);
        int ok=1;
        for(int i=1;i<n;i++){
          ok &= (arr[i]>arr[i-1]);
        }

        if(ok){
            cout<<0<<endl;
            continue;
        }


        for(int i=n-2;i>=0;i--){
            suffix[i]=suffix[i+1]+arr[i]>=arr[i+1];
        }
        int x=1;
        for(int i=1;i<n;i++){
            if(arr[i]<=arr[i-1]){
                prefix[i]=x;
               
            }
            else{
                 prefix[i]=prefix[i-1];
            }

            x+= arr[i]>=arr[i-1];
        }
        int ans=n;
        for(int i=0;i<n;i++){
            ans=min(ans,prefix[i]+suffix[i]);
        }
        cout<<ans<<endl;
    }

}