#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        if(n%2==1){
            cout<<-1<<endl;
        }
        else{
            // int i=0;
            int k=0;
           vector<pair<int,int>>ans;
           for(int i=0;i<n-1;i++)
           {
            if(arr[i]==arr[i+1]){
                ans.push_back({i+1,i+2});
                i++;
                k++;
            }
            else{
                ans.push_back({i+1,i+1});
                ans.push_back({i+2,i+2});
                i++;
                k+=2;
            }
           }

           cout<<k<<endl;
           for(auto it:ans){
            cout<<it.first<<' '<<it.second<<endl;
           }
        }
    }
}