#include<bits/stdc++.h>
using namespace std;
const int INF = 1'000'000'009;
char type(vector<int>&a, int id) {
    int distL = (id == 0? INF : a[id] - a[id - 1]);
    int distR = (id + 1 == a.size()? INF : a[id + 1] - a[id]);
    if(distL < distR) return 'L';
    if(distL > distR) return 'R';
    assert(false);
}
int main(){
     ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
         vector <int> l(n), r(n);
        for (int i = 1; i < n; ++i)
            r[i] = r[i - 1] + (type(arr, i - 1) == 'R'? 1 : arr[i] - arr[i - 1]);
        for (int i = n - 2; i >= 0; --i)
            l[i] = l[i + 1] + (type(arr, i + 1) == 'L'? 1 : arr[i + 1] - arr[i]);
        
        int m;
        cin>>m;
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;

            --x,--y;
            if(x<y)cout<<r[y]-r[x]<<endl;
            else cout<<l[y]-l[x]<<endl;
        }

    }
}