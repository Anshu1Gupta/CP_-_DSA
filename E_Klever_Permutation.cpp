
// 10 1  9  2  8  3  7  4  6   5

// 10 1  7  3  9  2  6  4  8   5
// 10  5 4     9  6 3         8  7 2 1

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>ans(n);
        int start=1;
        int end=n;
        for(int i=0;i<k;i++){
            for(int j=i;j<n;j+=k){
                if(i%2==1){
                    ans[j]=start++;
                }
                else{
                    ans[j]=end--;
                }
            }
        }

        for(int i=0;i<n;i++){
            cout<<ans[i]<<' ';
        }cout<<endl;
    }
}