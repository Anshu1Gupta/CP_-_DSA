#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=1;
    // cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int arr[n];
        int lar=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==1)lar++;
        }

        for(int i=0;i<q;i++){
            int a,b;
            cin>>a>>b;
                
            if(a==1){
                if(arr[b-1]==0){
                    lar++;
                    arr[b-1]=1;
                }
                else{
                    lar--;
                    arr[b-1]=0;
                }
            }
            else{
               if(b>lar)cout<<0<<endl;
               else cout<<1<<endl;
            }
        }
        
    }
}