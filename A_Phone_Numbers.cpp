#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    string str;
    cin>>str;
    int count=0;
    for(int i=0;i<n;i++){
        if(str[i]=='8')count++;
    }

    int leng=n/11;
    cout<<min(count,leng);
}