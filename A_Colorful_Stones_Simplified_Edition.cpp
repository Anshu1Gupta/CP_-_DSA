#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;

    int k=0;
    for(int i=0;i<str2.size();i++){
      if(str1[k]==str2[i])k++;
    }
    cout<<k+1<<endl;
}