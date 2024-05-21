#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<vector<char>>arr(n,vector<char>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        vector<vector<char>>brr=arr;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(arr[i],arr[j]);
            }
        }
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                sum+=abs(arr[i][j]-brr[i][j]);
            }
        }
        cout<<sum/2<<endl;

    }
}