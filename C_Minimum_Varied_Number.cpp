#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,vector<string>>mp;
    int n;
    int total;
    cin>>n;
    cin>>total;
    vector<string>str(n);
    vector<int>cost(n);


    for(int i=0;i<n;i++){
        string str1;
        // cin.ignore();
        getline(cin >> ws, str1);
        str[i]=str1;
    }

    for(int i=0;i<n;i++)cin>>cost[i];


    for(int i=0;i<n;i++){
        mp[cost[i]].push_back(str[i]);
    }
    for(auto &it:mp){
        sort(it.second.begin(),it.second.end());
    }
    
    for(auto it:mp){

        for(int i=0;i<it.second.size();i++){
            if(total>=it.first){
                cout<<it.second[i]<<'-'<<it.first<<endl;
                total-=it.first;
            }
        }
    }






}
// 5
// 60
// Cyber Sirens
// The Quantum Squad
// Eternal Emissaries
// Lunar Legion
// Timebenders
// 10 10 30 20 20