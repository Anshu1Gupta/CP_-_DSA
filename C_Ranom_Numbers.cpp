#include<bits/stdc++.h>
using namespace std;
#define int long long
int num(char x){
    if(x=='A')return 1;
    if(x=='B')return 10;
    if(x=='C')return 100;
    if(x=='D')return 1000;
    if(x=='E')return 10000;
}
signed main(){
    int t;
    cin>>t;
    while(t--){
       
        string str;
        cin>>str;
        int n=str.length();
        vector<char>arr(n),maxArray(n);

        for(int i=0;i<n;i++){
            arr[i]=str[i];
        }
        maxArray[n-1]=str[n-1];
        for(int i=n-2;i>=0;i--){
            maxArray[i]=max(maxArray[i+1],str[i]);
        }


        int i=0;
        while(i<n-1&&maxArray[i]==maxArray[i+1]){
           i++;
        }

        long long sum=0;
        for(int k=i+1;k<n;k++){
            if(arr[k]>=maxArray[k]){
                sum+=num(arr[k]);
            }
            else{
                sum-=num(arr[k]);
            }
        }
      
        int mini=INT_MIN;
      for(char c='A';c<='E';c++){
        int ans=0;
        for(int k=0;k<=i;k++){
            if(arr[k]>=c){
                ans+=num(arr[k]);
            }
            else ans-=num(arr[k]);
        }
        if(t==0){
            cout<<ans<<endl;
        }
        mini=max(mini,ans);
      }


      long long result1=sum+mini;
      int s=0;
  while(s<n&&arr[s]=='E'){
    s++;
  }
  if(s<n){
    arr[s]='E';
  }
  char newA[n];
  newA[n-1]=arr[n-1];
  
  for(int i=n-2;i>=0;i--){
    newA[i]=max(arr[i],newA[i+1]);
  }
  int result2=0;
  for(int i=0;i<n;i++){
    if(arr[i]>=newA[i]){
        result2+=num(arr[i]);
    }
    else result2-=num(arr[i]);
  }

  
cout<<max(result1,result2)<<endl;




    }
}