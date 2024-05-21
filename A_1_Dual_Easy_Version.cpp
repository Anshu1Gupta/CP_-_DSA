#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    int maxi=*max_element(arr,arr+n);
    int ind;
    for(int i=0;i<n;i++){
        if(maxi==arr[i]){
            ind=i;
            break;
        }
    }

if(maxi>0){
    vector<pair<int,int>>p;
priority_queue<pair<int,int>>pq;
pq.push({maxi,ind});
    for(int i=1;i<n;i++){
        if(arr[i-1]<=arr[i]){
            // i++;
            // continue;
        }
        else{
         while(arr[i]<arr[i-1]){
          auto m=pq.top();
          arr[i]+=m.first;
        //   if(!(arr[i]>arr[i-1]))
             p.push_back({i+1,m.second+1});
         }
        }
        pq.push({arr[i],i});
    }

    if(p.size()==0){
        cout<<0<<endl;
    }
    else{
        cout<<p.size()<<endl;
        for(int i=0;i<p.size();i++){
          cout<<p[i].first<<' '<<p[i].second<<endl;
        }
    }
}
else{

cout<<n-1<<endl;
for(int i=n-2;i>=0;i--){
   cout<<i+2<<' '<<i+1<<endl;
}
}


    }
}