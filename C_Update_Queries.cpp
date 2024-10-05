#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        vector<int>arr(m);

        for(int i=0;i<m;i++){
            cin>>arr[i];
        }
        string s2;
        cin>>s2;

        sort(s2.begin(),s2.end());
        sort(arr.begin(),arr.end());
        vector<char>str(n,'0');

        for(int i=0;i<m;i++){
            int ind=arr[i]-1;

            if(str[ind]!='0'&&str[ind]>=s2[i]){
                str[ind]=s2[i];
            }
            else if(str[ind]=='0'){
                str[ind]=s2[i];
            }
        }

        for(int i=0;i<n;i++){
            if(i<m){
                if(str[i]=='0'){
                    s[i]=str[i];
                }
            }
        }

        cout<<s<<endl;


    }
}