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

ll n, m, a[10005][10005], res;

bool cp(ll n)
{
    ll x = sqrt(n);
    return x * x == n;
}

signed main()
{
    if (fopen("SACH.inp", "r"))
    {
        freopen("SACH.inp", "r", stdin);
        freopen("SACH.out", "w", stdout);
    }
    ios;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        ll maxx = INT_MIN;
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            maxx = max(maxx, a[i][j]);
            if (cp(a[i][j]))
            {
                res += a[i][j];
            }
        }
        cout << maxx << "\n";
    }
    cout << res;
}