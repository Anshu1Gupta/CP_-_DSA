#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++)cin>>arr[i];


        stack<int>st;
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[i]==arr[st.top()]){
                st.pop();
            }
            if(st.empty()){
                ans[i]=-1;
            }
            else{
                ans[i]=st.top();
            }
            st.push(i);
        }


        int k;
        cin>>k;
        while(k--){
            int l,r;
            cin>>l>>r;
            l--;r--;

            if(ans[l]==-1 || ans[l]>r){
                cout<<-1<<' '<<-1<<endl;
            }
            else{
                cout<<l+1<<" "<<ans[l]+1<<endl;
            }
        }
    }
}