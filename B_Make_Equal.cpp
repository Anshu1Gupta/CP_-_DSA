#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }

        int maxi= sum/n;
        int car=0;
        int flag=0;
        for(int i=0;i<n;i++){
            if(arr[i]<maxi){
                if(car<(maxi-arr[i])){
                    flag=1;
                    break;
                }
                else{
                    car-=(maxi-arr[i]);
                }
            }
            else if(arr[i]>=maxi){
                car+=arr[i]-maxi;
            }
        }
        if(flag)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }

}