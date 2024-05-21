#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>neg,pos;
        int zero=0;
        int arr[n];
        vector<int>ans;
        for(int i=0;i<n;i++){
            cin>>arr[i];

            if(arr[i]<0)neg.push_back(arr[i]);
            else if(arr[i]>0)pos.push_back(arr[i]);
            else if(arr[i]==0&& ans.size()<2)ans.push_back(arr[i]);
        }
        if(neg.size()>2||pos.size()>2)cout<<"NO"<<endl;
        else{
        for(auto it:neg)ans.push_back(it);
        for(auto it:pos)ans.push_back(it);

         int flag=0;
         bool curr=true;
         for(int i=0;i<ans.size();i++){
            for(int j=i+1;j<ans.size();j++){
                for(int k=j+1;k<ans.size();k++){
                    flag=0;
                    for(int p=0;p<ans.size();p++){
                     if(ans[i]+ans[j]+ans[k]==ans[p])flag=1;
                    }
                    if(flag==0){
                     curr=false;
                     break;
                    }
                }
                
            }
         }
         if(curr)
         cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
        }
        
        


    }


    // -1 0 1 -2 3 -3
}