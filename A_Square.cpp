#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int x1,y1,x2,y2,x3,y3,x4,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    int size=0;
    if(x1==x2){
        int val1=abs(x1-x2);
        int val2=abs(y1-y2);
        size=sqrt(pow(val1,2)+pow(val2,2));
    }
    else if(x1==x3){
        int val1=abs(x1-x3);
        int val2=abs(y1-y3);
        size=sqrt(pow(val1,2)+pow(val2,2));
    }
    else if(x1==x4){
        int val1=abs(x1-x4);
        int val2=abs(y1-y4);
        size=sqrt(pow(val1,2)+pow(val2,2));
    }
    cout<<size*size<<endl;
    }
}