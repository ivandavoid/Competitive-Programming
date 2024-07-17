#include <bits/stdc++.h>
#define pb push_back
#define ppb pop_back
#define sti stack<int>
#define stll stack<long long>
#define pf push_front
#define sz size()
#define lb lower_bound
#define ub upper_bound
#define fi first
#define se second
#define ll long long
#define ull unsigned long long
#define str string
#define ss stringstream
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vii vector<int>
#define vll vector<long long>
#define vb vector<bool>
#define mpii map<int, int>
#define mpsi map<string, int>
#define mp make_pair
#define ios                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

string a, b;
int n, m, K, dp[1005][1005][15], suf[1005][1005];

signed main()
{
    if (fopen("SPLIT.inp", "r"))
    {
        freopen("SPLIT.inp", "r", stdin);
        freopen("SPLIT.out", "w", stdout);
    }
    ios;
    cin >> n >> m >> K;
    cin >> a >> b;
    a = ' ' + a, b = ' ' + b;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i] == b[j])
            {
                suf[i][j] = suf[i - 1][j - 1] + 1;
            }
            else
            {
                suf[i][j] = 0;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            for (int k = 1; k <= K; k++)
            {
                int len = suf[i][j];
                if (len == 0)
                {
                    dp[i][j][k] = max(dp[i - 1][j][k], dp[i][j - 1][k]);
                }
                else
                {
                    dp[i][j][k] = max({dp[i - 1][j][k], dp[i][j - 1][k], dp[i - len][j - len][k - 1] + len});
                }
            }
        }
    }
    dp[n][m][K] == 0 ? cout << -1 : cout << dp[n][m][K];
}