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

ll n, x, res;

ll solve(ll n)
{
    ll res = 1;
    ll x = n % 10;
    if (x == 0)
        return 1;
    n /= 10;
    for (int i = 1; i <= x; i++)
    {
        res *= n;
    }
    return res;
}

signed main()
{
    if (fopen("luythua.inp", "r"))
    {
        freopen("luythua.inp", "r", stdin);
        freopen("luythua.out", "w", stdout);
    }
    ios;
    cin >> n;
    while (n--)
    {
        cin >> x;
        res += solve(x);
    }
    cout << res;
}