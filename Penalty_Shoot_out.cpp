#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=3;
    // cin>>t;
    while(t--){
        string str;
        cin>>str;
        // int A[10],B[10];
        int A=0;int B=0;
        int remA=5;
        int remB=5;
    int f1=0,f2=0,f3=0;
    for(int i=0;i<10;i++){
        if(i%2==0&&str[i]=='1')A++;
        if(i%2==1&&str[i]=='1')B++;
if(i%2==0)remA--;
if(i%2==1)remB--;

        if(remA>(remB+B)){
            cout<<"TEAM-A"<<" "<<(i+1)<<endl;
            f1=1;
            break;
        }
        else if(remB>(remA+A)){
            cout<<"TEAM-B"<<" "<<(i+1)<<endl;
            f1=1;
            cout<<remA<<" "<<A<<endl;
            // cout<<"u"<<endl;
            break;
        }
    }

    if(A==B&&f1==0){
        // cout<<'8'<<endl;/
        for(int i=10;i<19;i=i+2){
            if(i%2==0&&str[i]=='1')A++;
            if((i+1)%2==1&&str[i+1]=='1')B++;

            if(A>B){
                cout<<"TEAM-A"<<" "<<(i+2)<<endl;
                f2=1;
                break;
            }
            else if(B>A){
                cout<<"TEAM-B"<<" "<<(i+2)<<endl;
                f2=1;
                break;
            }
        }

    }
    if(f1==0&&f2==0){
        int rema=5;
        int remb=5;
        for(int i=10;i<20;i++){
        if(i%2==0&&str[i]=='1')A++;
        if(i%2==1&&str[i]=='1')B++;
if(i%2==0)rema--;
if(i%2==1)remb--;
        int remq=(20-(i+1))/2;
        int remb=(20-(i))/2;
        if(rema>(remb+B)){
            cout<<"TEAM-A"<<" "<<(i+1)<<endl;
            f3=1;
            break;
        }
        else if(remb>(rema+A)){
            cout<<"TEAM-B"<<" "<<(i+1)<<endl;
            f3=1;
            break;
        }
        }
        if(f3==0)
        {
            if(A==B)cout<<"TIE"<<endl;
            else{
                if(A>B)cout<<"TEAM-A"<<" "<<20<<endl;
                if(A<B)cout<<"TEAM-B"<<" "<<20<<endl;
            }
        }
    }
    }
}