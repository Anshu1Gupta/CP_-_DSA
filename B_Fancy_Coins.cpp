#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
int t;
cin>>t;
while(t--){
    int m,k,a1,ak;
    cin>>m>>k>>a1>>ak;

int reqak=m/k;
int reqone=m%k;

// int wehavek=ak;
reqak-=ak;
if(reqak<=0){
      if(reqone<=a1){
        cout<<0<<endl;
      }
      else{
        // cout<<"dsjfn"<<endl;
        cout<<reqone-a1<<endl;
      }
}
else{
    if((a1/k)>=reqak){
        a1=a1-reqak*k;
       if(reqone<=a1){
        cout<<0<<endl;
      }
      else{
        // cout<<"sd"<<endl;
        cout<<reqone-a1<<endl;
      }
    }
    else{
        reqak-=a1/k;
        a1=a1-k;

        cout<<reqak+(reqone-a1)<<endl;
    }
}
   
    
    


   
    

//    int coinsak=ak;
//    int couins1=a1;
  
//   if(k==m){
//     if(ak!=0)cout<<0<<endl;
//     else cout<<1<<endl;
//   }
//   else if(k>m){
//      cout<<m-a1<<endl;
//   }
//    else{
// int flag=0;
//    if(m%k==0&&(k*ak>=m)){
//     cout<<0<<endl;
//     flag=1;

//    }
//   if(m%k==0){
//     m=m-ak*k;
//     }
//     else if(k*ak>=m){
//         m=m%k;
//     }

//    if(a1>=m)cout<<0<<endl;
//    else if(a1==0){
//     cout<<m/k+(m%k)<<endl;
//    }
//    else{
//     if(ak*k<m){
//         m=m-ak*k;
//     }
//     else{
//         m=m%(ak*k);
//     }
//     int store=m;
 
//         m=m-a1;
        
//         if(m<=0)cout<<0<<endl;
//         else if(m%k==0)cout<<m/k<<endl;
//         else{
//             if(a1>store%k){
//                 // cout<<1<<endl;
//                 // cout<<m<<endl;
//                 cout<<m/k+1<<endl;
//             }
//             else{
//                 cout<<m/k+m%k<<endl;
//             }
//         }
//    }
   


   }
//    }


}