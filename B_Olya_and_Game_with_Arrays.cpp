#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
     vector<int>second;
     vector<int>first;
    priority_queue<int>pq;
    while(n--){


        int m;
        cin>>m;
      
       
       
        for(int i=0;i<m;i++){
            int a;
            cin>>a;
            if(pq.size()<2){
                pq.push(a);
            }
            else{
                if(pq.top()>a){
                    pq.pop();
                    pq.push(a);
                }
            }
        }

        int f=pq.top();pq.pop();
        int s=pq.top();pq.pop();

        // cout<<"mini-1->"<<f<<" "<<"mini-2->s"<<s<<endl;
        if(f==s){
            second.push_back(f);
        }
        else{
            second.push_back(f);
            first.push_back(s);
        }
        // cout<<first.size()<<endl;


    }
    int sum=0;
    sort(second.begin(),second.end());
    for(int i=1;i<second.size();i++){
        sum+=second[i];
    }
    int mini=1e9;
    if(first.size()>0)
      mini=*min_element(first.begin(),first.end());

   sum+=min(mini,second[0]);

cout<<sum<<endl;




   }
}