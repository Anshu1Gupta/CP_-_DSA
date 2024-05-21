#include<bits/stdc++.h>
using namespace std;
bool find(int arr[],int brr[], int k,int n,int m){
    // unordered_map<int,int>mp;
    int c1=k/2;
    int c2=k/2;
    unordered_map<int,int>mp1,mp2;
    for(int i=0;i<n;i++){
           mp1[arr[i]]++;
    }
    for(int i=0;i<m;i++){
           mp2[brr[i]]++;
    }
     
    int rel=0;
    for(int i=1;i<=k;i++){
        if(!mp1.count(i) && !mp2.count(i)){
          

            return false;
        }
        
        else if(mp1.count(i)&&mp2.count(i)){
            rel++;
           
        }
        else if(mp1.count(i))c1--;
        else c2--;
    }

    // cout<<c1<<' '<<c2<<' '<<rel<<endl;
    if(c1>0){
        int maxi=min(rel,c1);
        c1-=maxi;
        rel-=maxi;
    }
    if(c2>0){
        int maxi=min(rel,c2);
        c2-=maxi;
    }
    if(c1==0 && c2==0)return true;
    return false;
    
    



}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int arr[n],brr[m];
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=0;i<m;i++)cin>>brr[i];

        sort(arr,arr+n);
        sort(brr,brr+m);

        bool first= find(arr,brr,k,n,m);
        // bool second= find(brr,arr,k);

        if(first)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}