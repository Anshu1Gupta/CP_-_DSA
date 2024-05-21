#include<bits/stdc++.h>
using namespace std;
bool isValid(string str,int i,int j){
    if(j-i<=1)return false;
    for(int k=i+1;k<j;k++){
        if(str[k]!=')')return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        vector<pair<int,int>>pair;
        for(int i=0;i<n;i++){
            if(str[i]==':'){
                for(int j=i+1;j<n;j++){
                    if(str[j]==':'){
                        pair.push_back({i,j});
                        i=j-1;
                        break;
                    }
                }
            }
        }
        int count=0;
        for(auto it:pair){
           int i=it.first;
           int j=it.second;
           if(isValid(str,i,j))count++;
        }
        cout<<count<<endl;

    }
}