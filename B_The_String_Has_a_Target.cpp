#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string str;
        cin >> n >> str;
        char mn = *min_element(str.begin(),str.end());
        for(auto it = prev(str.end()); ; it--){
            if(*it == mn){
                str.erase(it);
                break;
            }
        }
        
        str = mn + str;
        cout << str << endl;
}
}