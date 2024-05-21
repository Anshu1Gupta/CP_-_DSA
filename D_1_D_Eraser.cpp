#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
     int n,k;
    cin>>n>>k;
    int count=0;
    string str;
    cin>>str;

    vector<int>ind;
    deque<int>q;
    for(int i=0;i<str.size();i++){
      if(str[i]=='B'){
         if(q.empty())q.push_back(i);
         else{
            if(i-q.front()+1 <=k){
              q.push_back(i);
            }
            else{
              while(!q.empty())q.pop_back();
              count++;
              q.push_back(i);
            }
         }
      }
    }
    if(!q.empty())count++;
    cout<<count<<endl;
   }
}