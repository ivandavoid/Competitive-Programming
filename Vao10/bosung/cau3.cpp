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

ll n, a[1000006], k;

ll solve(ll arr[], ll n, ll k)
{
    queue<ll> q;
    ll m = 0;
    ll su = 0;
    for (int i = 0; i < k; i++)
    {
        su += a[i];
    }
    for (int i = k; i < n; i++)
    {
        su += a[i] - a[i - k];
        m = max(m, su);
    }
    return m;
}

signed main()
{
    if (fopen("cau3.inp", "r"))
    {
        freopen("cau3.inp", "r", stdin);
        freopen("cau3.out", "w", stdout);
    }
    ios;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << solve(a, n, k);
}