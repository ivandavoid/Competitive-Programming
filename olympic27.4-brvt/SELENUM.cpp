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

ll n, a[1000006][3], dp[1000006][3], res;

signed main()
{
    if (fopen("SELENUM.inp", "r"))
    {
        freopen("SELENUM.inp", "r", stdin);
        freopen("SELENUM.out", "w", stdout);
    }
    ios;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i][1] >> a[i][2];
    }
    for (int i = 1; i <= n; i++)
    {
        dp[i][1] = max(dp[i - 1][2] + a[i][1], dp[i - 1][1]);
        dp[i][2] = max(dp[i - 1][1] + a[i][2], dp[i - 1][2]);
    }
    cout << max(dp[n][1], dp[n][2]);
}