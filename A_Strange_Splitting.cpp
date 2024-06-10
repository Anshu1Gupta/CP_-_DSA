#include<bits/stdc++.h>
using namespace std;

void except(int n){
            cout<<"YES"<<endl;
            cout<<"R";
            for(int i=1;i<n;i++)cout<<'B';
            cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int>mp;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        vector<char>ans(n);
        if(mp.size()==1)cout<<"NO"<<endl;
        else if(mp.size()==2){
            int flag=0;
            for(int i=1;i<n;i++){
                if(arr[i]!=arr[i-1]  && i==1){
                    ans[i]='R';
                    ans[i-1]='R';
                    break;
                }
                else flag=1;
            }

            if(flag==1){
                except(n);
            }
            else{
                for(int i=0;i<n;i++){
                if(ans[i]!='R')ans[i]='B';
            }
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)cout<<ans[i];
            cout<<endl;
            }
        }
        else{
            except(n);
        }
       
    }

}