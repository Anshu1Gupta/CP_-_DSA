#include <bits/stdc++.h>
using namespace std;
bool ifToCheck(vector<int>&arr){
    int n=arr.size();
    for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i-1] && arr[i]<arr[i+1] || arr[i]<arr[i-1]&&arr[i]>arr[i+1])return false;
    }

    vector<int>ss=arr;
    sort(ss.begin(),ss.end());
    if(ss==arr)return false;
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);

        for(int i=0;i<n;i++)cin>>arr[i];

        int mn=0,mx=int(1e9);
        for(int j=0;j+1<n;j++){
            int x=arr[j];
            int y=arr[j+1];

            int midL=(x+y)/2;
            int midR=(x+y+1)/2;

            if(x<y){
                mx=min(mx,midL);
            }
            if(x>y){
                mn=max(mn,midR);
            }
        }
        if(mn<=mx)cout<<mn<<endl;
        else cout<<-1<<endl;

    }

}