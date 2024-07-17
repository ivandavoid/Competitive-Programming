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
#define ll long long ///** TEMPLATE OWNER: NGUYEN TUAN TU - Ivan da Void
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
const int MAXN = 1e6 + 5;
using namespace std;

ll t, p, res[MAXN], MAX[MAXN];

void sieve()
{
    for (int m = 1, n; m <= 707; ++m)
    {
        for (int p = m * m; p <= 5e5; p += m)
        {
            n = p / m - m, MAX[p] = max(MAX[p], 1ll * n * (m - n));
        }
    }
    for (int k = 1; k <= 2e5; ++k)
    {
        for (int p = k; p <= 5e5; p += k)
        {
            res[p * 2] = max(res[p * 2], MAX[p / k] * k * p);
        }
    }
}

signed main()
{
    if (fopen("LAKE.inp", "r"))
    {
        freopen("LAKE.inp", "r", stdin);
        freopen("LAKE.out", "w", stdout);
    }
    ios;
    sieve();
    cin >> t;
    while (t--)
    {
        cin >> p;
        cout << res[p] << "\n";
    }
}