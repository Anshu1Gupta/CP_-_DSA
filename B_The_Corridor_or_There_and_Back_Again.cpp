#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int room, time;
            cin>>room>>time;
            if(mp.find(room)==mp.end()){
                mp[room]=time;
            }
            else{
                mp[room]=min(mp[room],time);
            }
        }

        int maxi=0;
        int to=1e9;
        int maxiAllowed=1e9;
        for(auto it:mp){
            
            if(maxiAllowed>=it.first)
            maxi=it.first;

            else{
                break;
            }
            int now=it.first+((it.second/2));
            maxiAllowed=min(now,maxiAllowed);


        }
        if(maxiAllowed>maxi){
            maxi=maxi+maxiAllowed;
        }
        // maxi=max(maxi,to);
        cout<<maxi<<endl;

    }
}