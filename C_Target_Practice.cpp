#include<bits/stdc++.h>
using namespace std;
int score(int i,int j){
    int n=10;

    if(i==0||i==9||j==0||j==9)return 1;
    else if(i==1||i==8||j==1||j==8)return 2;
     if(i==2||i==7||j==2||j==7)return 3;
    else if(i==3||i==6||j==3||j==6)return 4;
     else if(i==4||i==5||j==4||j==5)return 5;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n=10;
        int arr[n][n];
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                 char a;
                 cin>>a;
                 if(a=='X'){
                    count+=score(i,j);
                 }
            }
        }
        cout<<count<<endl;

       
    }
}