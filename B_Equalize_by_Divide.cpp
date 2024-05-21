#include<bits/stdc++.h>
using namespace std;
// #define double long long
signed main(){
    double t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        double arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
       vector<pair<double,double>>vect;
       for(int i=0;i<n;i++){
        vect.push_back({arr[i],i+1});
       }
    sort(vect.begin(),vect.end());
    double mini=*min_element(arr,arr+n);
    double maxi=*max_element(arr,arr+n);
    vector<pair<int,int>>ans;
    if(mini==1&&maxi!=1)cout<<-1<<endl;
    else if(mini==maxi)cout<<0<<endl;
    else{
          int count=0;
       while(vect[0].first!=vect[n-1].first){
         double x=vect[n-1].first;
        double y;
        double ind;
    for(int  i=n-1;i>=0;i--){
        if(x!=vect[i].first){
            y=vect[i].first;
            ind=vect[i].second;
            break;
        }
    }
  
    for(int i=0;i<n;i++){
    //   if(y!=vect[i].first){
          if(y<vect[i].first){
            while(vect[i].first>y){
               
                vect[i].first=ceil(vect[i].first/y);
                ans.push_back({vect[i].second,ind});
                // cout<<vect[i].second<<' '<<ind<<endl;
                count++;
            }
        }
    //   }
    }
    sort(vect.begin(),vect.end());
    // int mini=max(vect.first.begin(),vect.end().first);
  

       }

       cout<<count<<endl;
       for(int i=0;i<ans.size();i++){
        cout<<ans[i].first<<' '<<ans[i].second<<endl;
       }

    }
   
    }
}