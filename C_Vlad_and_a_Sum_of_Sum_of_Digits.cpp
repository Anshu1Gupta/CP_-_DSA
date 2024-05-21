#include<bits/stdc++.h>
using namespace std;
vector<int>arr(2e5+1);
int findDigit(int num){
    int val=0;
    while(num!=0){
        val+= num%10;
        num/=10;
    }
    return val;
}

int main(){
int count=0;
for(int i=1;i<=200000;i++){
int sum=findDigit(i);
count+=sum;
arr[i]=count;
}
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<arr[n]<<endl;
    }
}