#include<bits/stdc++.h>
using namespace std;

bool isCheck(vector<vector<char>>&arr,char x,int i,int j){
    if(x=='.')return false;
    if(i==0&&j==0){
        if(arr[i][j]==arr[i][j+1]&&arr[i][j+1]==arr[i][j+2])return true;
        if(arr[i][j]==arr[i+1][j]&&arr[i+1][j]==arr[i+2][j])return true;
        if(arr[i][j]==arr[i+1][j+1]&&arr[i+1][j+1]==arr[i+2][j+2])return true;
        
    }
    if(i==0&&j==1){
        if(arr[i][j]==arr[i][j-1]&&arr[i][j]==arr[i][j+1])return true;
        if(arr[i][j]==arr[i+1][j]&&arr[i+1][j]==arr[i+2][j])return true;
    }
     if(i==0&&j==2){
        if(arr[i][j]==arr[i+1][j]&&arr[i+1][j]==arr[i+2][j])return true;
        if(arr[i][j]==arr[i+1][j-1]&&arr[i+1][j-1]==arr[i+2][j-2])return true;

    }
    if(i==1&&j==0){
        if(arr[i][j]==arr[i][j+1]&&arr[i][j+1]==arr[i][j+2])return true;
    }
    if(i==2&&j==0){
        if(arr[i][j]==arr[i][j+1]&&arr[i][j+1]==arr[i][j+2])return true;
        
    }
    return false;
}
int main(){
    int t;
    cin>>t;
while(t--){
    vector<vector<char>>arr(3,vector<char>(3));

    for(int i=0;i<3;i++){
        // string str;
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
     char ans='.';
    if(isCheck(arr,arr[0][0],0,0))ans=arr[0][0];
    if(isCheck(arr,arr[0][1],0,1))ans=arr[0][1];
    if(isCheck(arr,arr[0][2],0,2))ans=arr[0][2];
    if(isCheck(arr,arr[1][0],1,0))ans=arr[1][0];
    if(isCheck(arr,arr[2][0],2,0))ans=arr[2][0];


    if(ans=='.')cout<<"DRAW"<<endl;
    else cout<<ans<<endl;
}
}