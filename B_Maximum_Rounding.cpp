#include<bits/stdc++.h>
#define int long long 
using namespace std;
signed main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int flag=0;
        int n=str.length();
        for(int i=0;i<n;i++){
            if(str[i]>='5'){
        
                while(i-1>=0&&str[i]>='5'){
                    str[i-1]++;
                    i--;
                }

                if(i==0&&str[i]>='5'){
                    cout<<'1';
                    for(int j=0;j<n;j++)cout<<'0';
                }
                else {
                    for(int k=0;k<=i;k++){
                        cout<<str[k];
                    }
                    for(int j=i+1;j<n;j++)cout<<'0';
                }
                flag=1;
                break;
            }
        }
        if(flag!=1){
            for(int i=0;i<n;i++)cout<<str[i];
        }

        cout<<endl;
    }
}