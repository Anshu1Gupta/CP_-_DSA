#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<string,int>mp;
        for(int i=0;i<n;i++){
            string str;
            cin>>str;
            mp[str]++;
        }

        vector<string>vect{"O","A","B","AB"};
        
        int maxAB=mp["AB"];
        int maxA=mp["A"];
        int maxB=mp["B"];
        int maxO=mp["O"];
     int chainAB=maxAB;
     int chainA=maxA+chainAB;
     int chainB=maxB+chainAB;
     int chainO=maxO;
     int maxi=0;
     maxi=max(chainA,chainB);
     chainO+=maxi;
     cout<<max(chainO,max(chainA,chainB))<<endl;

    }
}
