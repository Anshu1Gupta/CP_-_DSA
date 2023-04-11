#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
std::mt19937 rng((long long) std::chrono::steady_clock::now().time_since_epoch().count());
//sorting  map by values;
bool sortbyCond(const pair<long long, long long>& a,
                const pair<long long, long long>& b)
{
    if (a.first != b.first)
        return (a.first < b.first);
    else
       return (a.second > b.second);
}
struct comp {
    template <typename T>
    bool operator()(const T& l,
                    const T& r) const
    {
        if (l.second != r.second) {
            return l.second > r.second;
        }
        return l.first < r.first;
    }
};
vector<string> sort(map<string, long long >& M){
    set<pair<string, long long >, comp> S(M.begin(),M.end());
    vector<string>x;
    for (auto& it : S) {
        x.push_back(it.first);
    }
    return x;
}
bool isPrime(long long check){
    if(check<=1){  // 1 is not a prime number
        return true;
    }
    for(long long i=2;i*i<check;i++){
        if(check%i==0){
            return false; // if returning i result check is not prime 
        }
    }
    return true;  //returning -1 result check is prime
}
long long mul(long long a, long long b) { 
    return ((a % mod) * (b % mod)) % mod; 
} 
long long binaryPower(long long a, long long b) { 
    if (b == 0) 
        return 1; 
    long long tmp = binaryPower(a, b / 2); 
    tmp = mul(tmp, tmp); 
    if (b % 2) 
        return mul(tmp, a); 
    return tmp; 
} 
long long mod_inverse(long long a, long long m = mod) {
    return binaryPower(a, m - 2); 
} 
long long pataKaro[1000001];
void Sieve(){
    long long max=1000000;
    for(long long i=1;i<=max;i++)pataKaro[i]=1;
   pataKaro[0]=pataKaro[1]=0;
    for(long long i=2;i*i<=max;i++){
        if(pataKaro[i]){
            for(long long j=i*i;j<=max;j+=i){
                    pataKaro[j]=0;
            }
        }
    }
}
vector<long long>findFactors(long long n){
    vector<long long>result;
    for(long long i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                n=n/i;
                result.push_back(i);
            }
        }
    }
}
const long long ln = 2e5 + 1; 
long long fact[ln], invertFactors[ln]; 
void findFactors() { 
    fact[0] = 1;
    invertFactors[0] = 1; 
    for (long long i = 1; i < ln; i++) 
    { 
        fact[i] = mul(fact[i - 1], i); 
        invertFactors[i] = mul(invertFactors[i - 1], mod_inverse(i)); 
    } 
    return;
} 
#define ull unsigned long long
#define int long long
//Factorial in linear complexity
ull factorial(long long N)
{
    ull f = 1;
    for (ull i = 2; i <= N; i++)
        f *= i;
    return f;
}
// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
                                
                                  // Give Your Best  
signed  main(){ 
// TxtIO;
//****************************************************************************************
                                
int t;
cin>>t;
while(t--){
  int n;
  cin>>n;
  if(n<=2)cout<<"NO"<<endl;
  else{
    int arr[n];
    map<int,int>mp;
    for(int i=0;i<n;i++){
      int a;
      cin>>a;
      arr[i]=a;
      mp[a]++;
      
    }
    
 sort(arr,arr+n);
 int one =arr[n-1];
 int two=arr[n-2];
 
 int same;
 if(one==two){
   same=mp[one];
 }
 else{
   
   same=mp[one]+mp[two];
   
 }
 if(same>(n-same)&&(same-(n-same)>=2)){
   cout<<"NO"<<endl;
 }
 else cout<<"YES"<<endl;
  }
}


// ****************************************************************************************
//for fast input and output 
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;

} 



