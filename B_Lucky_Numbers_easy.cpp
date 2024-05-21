#include<bits/stdc++.h>
using namespace std;
void findPerm(string &temp,vector<string>&ans,vector<int>&vis,string &str){
    if(str.size()==temp.size()){
        ans.push_back(str);
        return;
    }

    for(int i=0;i<temp.size();i++){
        if(!vis[i]){
            vis[i]=1;
            str.push_back(temp[i]);
            findPerm(temp,ans,vis,str);
            str.pop_back();
            vis[i]=0;
            findPerm(temp,ans,vis,str);

        }
    }
}
int main(){
    int len;
    string str;
    cin>>str;
    int size=str.size();
    if(str.size()%2==1&& str[0]>'7'){
        size++;
    }
    len=size;
    
    string temp;
    int even=size/2;
    while(even--)temp+='4';
    even=size/2;
    while(even--)temp+='7';
    vector<string>ans;
    
    vector<int>vis(size,0);
    string dummy;
    findPerm(temp,ans,vis,dummy);
    string res;
    
    while(len--){
        res+='9';
    }
    for(auto it:ans){
        if(it>=str){
            res=min(it,res);
        }
    }
    cout<<res<<endl;

}