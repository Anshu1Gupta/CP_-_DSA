#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<long, long> p64;
typedef vector<int> v32;
typedef vector<ll> v64;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<p32> vp32;
typedef vector<p64> vp64;

#define pi 3.1415926536
#define all(v) v.begin(), v.end()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
ll mod = 1000000007;

bool solve(int i, int j, vector<vector<char>> &grid, int ct, vector<vector<int>> &dp)
{

    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    grid[i][j] = 'W';
    if (ct == 0)
    {
        dp[i][j] = true;
        return true;
    }

    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};

    for (int k = 0; k < 4; k++)
    {
        int nx = i + dx[k];
        int ny = j + dy[k];
        if (nx >= 0 && nx < 2 && ny >= 0 && ny < grid[0].size() && grid[nx][ny] == 'B')
        {
            if (solve(nx, ny, grid, ct - 1, dp))
            {
                dp[i][j] = true;
                return true;
            }
        }
    }

    grid[i][j] = 'B';
    dp[i][j] = false;
    return false;
}

int main()
{
    fast_cin();
    int t = 1;
    cin >> t;
    for (int q = 0; q < t; q++)
    {
        int m;
        cin >> m;
        vector<vector<char>> grid(2, vector<char>(m));
        int ct = 0;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
                if (grid[i][j] == 'B')
                    ct++;
            }
        }

        vector<vector<int>> dp(3, vector<int>(m+1, -1));
        bool first = false;
        bool second = false;

        if (grid[0][0] == 'B')
            first = solve(0, 0, grid, ct - 1, dp);
        if (grid[1][0] == 'B'){
            for(int i=0 ;i<m ;i++){
                dp[0][i]=-1 ;
                dp[1][i]=-1 ;
            }
            second = solve(1, 0, grid, ct - 1, dp);
        }

        bool ans = first || second;
        if (ans)
            yes;
        else
            no;
    }

    return 0;
}




    //    0
// WBWWB
// BBBBB
    //    0