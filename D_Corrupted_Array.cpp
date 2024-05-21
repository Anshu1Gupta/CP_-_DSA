#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int size=n+2;
        int arr[size];
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        sort(arr,arr+size);

        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        // cout<<sum<<endl;

        if(sum==arr[size-1]||sum==arr[size-2]){
            for(int i=0;i<n;i++){
                cout<<arr[i]<<' ';
            }cout<<endl;
        }
        else{
            int flag=0;
            int secondlast=arr[size-2];
            //   1 2 2 6 9
            for(int i=0;i<n;i++){
                sum-=arr[i];
                sum+=secondlast;

                if(sum==arr[size-1]){
                    for(int j=0;j<n;j++){
                        if(i!=j)cout<<arr[j]<<' ';
                    }
                    cout<<secondlast<<endl;
                    flag=1;
                    break;
                }
                sum+=arr[i];
                sum-=secondlast;
            }

             int flag2=0;
             if(!flag){
                int last=arr[size-1];

            for(int i=0;i<n;i++){
                sum-=arr[i];
                sum+=last;

                if(sum==arr[size-2]){
                    for(int j=0;j<n;j++){
                        if(i!=j)cout<<arr[j]<<' ';
                    }
                    cout<<last<<endl;
                    flag2=1;
                }
                sum+=arr[i];
                sum-=last;
            }
             }
             if(flag2==0&&flag==0)cout<<-1<<endl;
        }

    }
}