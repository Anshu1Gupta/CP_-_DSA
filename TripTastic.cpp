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

// #define int long long

//Factorial in linear complexity

ull factorial(long long N)

{

    ull f = 1;

    for (ull i = 2; i <= N; i++)

        f *= i;

    return f;

}
#define ll long long

// #define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);

                                

                                  // Give Your Best  





signed  main(){ 
Sieve();
// TxtIO;

//****************************************************************************************




ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t = 1;
cin >> t;
while (t--)
{
int n, m, k;
cin >> n >> m >> k;
k++;

int sum = 0;
vector<vector<int>>arr(n+1,vector<int>(m+1,0));
for (int i = 1; i <= n; i++) 
      for (int j = 1; j <= m; j++) {
 cin >> arr[i][j];
 sum =sum+ arr[i][j]; 
 }

int dp[n+1][m+1]={0};
for (int i = 1; i <= n; i++)
 for (int j = 1; j <= m; j++) {
 dp[i][j] = arr[i][j];
 dp[i][j] += dp[i][j - 1];
 dp[i][j] += dp[i - 1][j];
 dp[i][j] -= dp[i - 1][j - 1]; }

if(sum < k)
{ 
    cout << -1 << endl; continue;
}

int start = 0, last = max(n, m), md;
while(start < last)
{ 
md = (start + last) / 2;
int n = arr.size() - 1;
int m = arr[0].size()- 1;

bool flag = false;
for (int i = 1; i <= n; i++)
 for (int j = 1; j <= m; j++)
{ if (arr[i][j] == 0)
 continue;
 int p=md;
 int x1 = max(1, i - p); int y1 = max(1, j - p); int x2 = min(n, i + p); int y2 = min(m, j + p);
 int sum = dp[x2][y2] - dp[x2][y1 - 1] - dp[x1 - 1][y2] + dp[x1 - 1][y1 - 1]; if (sum >= k)
 flag = true;
}
 if (flag)
 last = md; else
 start = md + 1;
}

cout << start << endl;
}


// ****************************************************************************************

//for fast input and output 

ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    return 0;



} 





