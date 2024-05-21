#include<bits/stdc++.h>
using namespace std;

int main(){
 int t;
cin>>t;
while(t--){
 string str;
cin>>str;
  int out=0;
set<char>set;

for(int i=0;i<str.size();i++){
    set.insert(str[i]);
    if(set.size()==4){
        set.clear();
        set.insert(str[i]);
        out++;
    }
}
if(set.size()!=0)out++;
cout<<out<<endl;

}

}