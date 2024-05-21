#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        char arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
                // cout<<arr[i][j]<<endl;
            }
        }

        queue<char>q;
        q.push('v'),q.push('i'),q.push('k'),q.push('a');

        for(int i=0;i<m;i++){
            // cout<<1<<endl;
            for(int j=0;j<n;j++){
                if(!q.empty()&&arr[j][i]==q.front()){
                   
                    q.pop();
                    break;
                }
                if(q.empty())break;
            }
        }
        // cout<<q.size()<<endl;

        if(q.empty()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}