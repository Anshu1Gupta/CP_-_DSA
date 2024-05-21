#include<bits/stdc++.h>
using namespace std;
bool fromStart(int start,int n, int target,int arr[]){
    int lastInd=-1;
    for(int i=start;i<n;i++){
        if(arr[i]<target){
            continue;
        }
        else{
            lastInd=i;
            break;
        }
    }

    unordered_map<int,int>mp;
    for(int i=0;i<lastInd;i++){
        mp[arr[i]]++;
    }

    for(int i=0;i<target;i++){
        if(!mp.count(i)){
            return false;
        }
    }
    return true;
}
bool fromEnd(int end,int n, int target,int arr[]){
    int lastInd=-1;
    for(int i=end;i>=0;i--){
        if(arr[i]<target){
            continue;
        }
        else{
            lastInd=i;
            break;
        }
    }

    unordered_map<int,int>mp;
    for(int i=end;i>lastInd;i--){
        mp[arr[i]]++;
    }

    for(int i=0;i<target;i++){
        if(!mp.count(i)){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    // cout<<t<<endl;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        int num=-1;
        
        for(int count=0;count<n;count++){
            if(mp.find(count)==mp.end()){
            num=count;
            break;
        }
        }
        // cout<<num<<endl;
        if(num==0)cout<<"Yes"<<endl;
        else if(num==-1)cout<<"No"<<endl;
        else{



        int start=0;
        int end=n-1;

        // while()
















            // bool y=fromStart(0,n,num,arr);
            // bool x=fromEnd(n-1,n,num,arr);
           
            // if(x|y)cout<<"Yes"<<endl;
            // else cout<<"No"<<endl;
        }
        

    }
}
