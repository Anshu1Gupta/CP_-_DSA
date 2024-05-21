#include<bits/stdc++.h>
using namespace std;
int main(){
    // while(true){
        int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    int q1;
    cin>>q1;
    vector<int>res;
    vector<pair<int,int>>q;
    for(int i=0;i<q1;i++){
        int a,b;
        cin>>a>>b;
        q.push_back({a,b});
    }

    for(auto it:q){
        int ind=it.second;
        int orr=it.first;
        ind--;
        
            int ans=0;

            for(int j=ind;j<n;j++){
                ans=ans|arr[j];
                if(ans>=orr){
                    res.push_back(j+1);
                    break;
                }
            // }
            }
            if(ans==0)res.push_back(-1);
    }
    for(auto it:res)cout<<it<<endl;

    // }
}
