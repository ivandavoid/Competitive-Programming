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

ll n, a[1000006], c[1000006], dp[1000006];

signed main()
{
    if (fopen("THAMQUAN.inp", "r"))
    {
        freopen("THAMQUAN.inp", "r", stdin);
        freopen("THAMQUAN.out", "w", stdout);
    }
    ios;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n - 2; i++)
    {
        cin >> c[i];
    }
    dp[1] = a[1];
    dp[2] = a[1] + a[2];
    for (int i = 3; i <= n; i++)
    {
        dp[i] = min(dp[i - 1], dp[i - 2] + c[i - 2]) + a[i];
    }
    cout << dp[n];
}