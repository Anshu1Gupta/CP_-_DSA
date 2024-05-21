#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        vector<int>even,odd;

        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0)even.push_back(i+1);
            else odd.push_back(i+1);
        }
        cout<<n-1<<endl;
        if(arr[0]%2==0){
            for(int i=even.size()-2;i>=0;i--){
                cout<<even[i]<<' '<<even[i+1]<<endl;
            }
            for(int i=0;i<odd.size();i++){
                cout<<1<<' '<<odd[i]<<endl;
            }
        }
        else{
            for(int i=odd.size()-2;i>=0;i--){
                cout<<odd[i]<<' '<<odd[i+1]<<endl;
            }
            for(int i=0;i<even.size();i++){
                cout<<1<<' '<<even[i]<<endl;
            }
        }


        
    }
}