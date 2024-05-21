#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        vector<int>ans;
        int flag=0;
       
        for(int i=0;i<str.size();i++){
            if(str[i]=='+'){
                if(ans.size()&&ans.back()==-1){
                    ans.push_back(-1);
                }
                else{
                    ans.push_back(0);
                }
              
            }
            else if(str[i]=='-'){
                 int temp=ans.back();
                 ans.pop_back();
                 if(temp==1&&ans.size())ans.back()=1;
            }
            else if(str[i]=='1'){
               if(ans.size()<2)continue;
               if(ans.back()==-1){
                flag=1;
                break;
               }
               else ans.back()=1;
            }
            else {
                if(ans.size()<2||ans.back()==1){
                    flag=1;
                    break;
                }
                else ans.back()=-1;
            }
        }
        if(flag==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}




// +
// 0
// 1
// ++
// +0
// +1
// +-
// 0+
// 00
// 01
// 1+
// 10
// 11
// +++
// ++0
// ++1
// ++-
// +0+
// +00
// +01
// +0-
// +1+
// +10
// +11
// +1-
// +-+
// +-0
// +-1
// 0++
// 0+0
// 0+1
// 0+-
// 00+
// 000
// 001
// 01+
// 010
// 011
// 1++
// 1+0
// 1+1

// 1+-

// 10+

// 100

// 101

// 11+

// 110

// 111

// ++++

// +++0

// +++1

// +++-

// ++0+

// ++00

// ++01

// ++0-

// ++1+

// ++10

// ++11

// ++1-

// ++-+

// ++-0

// ++-1