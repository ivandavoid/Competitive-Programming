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

ll n, k, a[10000006], res;

signed main()
{
    if (fopen("bai3.inp", "r"))
    {
        freopen("bai3.inp", "r", stdin);
        freopen("bai3.out", "w", stdout);
    }
    ios;
    cin >> n >> k;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 2, a + n + 1, greater<ll>());
    for (ll i = 1; i <= k + 1; i++)
    {
        res += a[i];
    }
    for (ll i = k + 2; i <= n; i++)
    {
        res -= a[i];
    }
    cout << res << "\n";
}