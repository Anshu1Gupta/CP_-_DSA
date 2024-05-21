#include<bits/stdc++.h>
using namespace std;

#define int long long
signed main(){
   int t;
   cin>>t;
   while(t--){
    int cars,outlets,hours;
    cin>>cars>>outlets>>hours;
    int out[outlets];
    int cap[cars];

    for(int i=0;i<cars;i++){
        cin>>cap[i];
    }
    for(int i=0;i<outlets;i++){
        cin>>out[i];
    }
    sort(cap,cap+cars,greater<>());
    sort(out,out+outlets,greater<>());
    int sum=0;
    
    int currcar=0;
    int currout=0;
    int prev=-1;
    vector<int>hrem(cars,hours);
    while(currcar<(cars)&&currout<outlets){
      if(currcar+1<cars&&cap[currcar]>cap[currcar+1]&&hrem[currcar]||currcar==cars-1){
        if(cap[currcar]>out[currout]){
            hrem[currcar]--;
            sum+=out[currout];
            cap[currcar]-=out[currout];
            
        }
        else{
        if(hrem[currcar]){
            sum+=cap[currcar];
            hrem[currcar]--;
            cap[currcar]=0;
        }
        else{
        currcar++;
        currout++;
        }
       
        }
        if(hrem[currcar]==0){
            currcar++;currout++;
        }
      }else{
        currcar++;
        currout++;
      }
  
    }
    cout<<sum<<endl;

   }
}
// 60
// 11
// 0