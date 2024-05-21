#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin>>t;
    while(t--){
        int n;
       cin>>n;
     int arr[n];
       for(int i=0;i<n;i++)cin>>arr[i];
      map<int,int>mp;
      for(int i=0;i<n;i++){
        mp[arr[i]]=1;
      }
      int m;
      for(int i=0;i<=n;i++){
        if(mp.find(i)==mp.end()){
            m=i;
            break;
        }
      }
        if(mp.find(m+1)==mp.end()&&m<n){
            cout<<"Yes"<<endl;
        }
        else if(m==n){
            cout<<"No"<<endl;
        }
        else{
            int x;int y;
            for(int i=0;i<n;i++){
                if(arr[i]==(m+1)){
                    x=i;break;
                }
            }
            for(int i=n-1;i>=0;i--){
                if(arr[i]==m+1){
                    y=i;break;
                }
            }
            for(int i=x;i<=y;i++){
                arr[i]=m;
            }
            mp.clear();
            for(int i=0;i<n;i++){
                mp[arr[i]]=1;
            }
            int newm;
            for(int i=0;i<=n;i++){
                if(mp.find(i)==mp.end()){
                    newm=i;break;
                }
            }
            if(newm==m+1)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }

    }
}