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

ll a, b, res;

ll tcs(ll n)
{
    ll res = 0;
    while (n > 0)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}

signed main()
{
    if (fopen("MCD.inp", "r"))
    {
        freopen("MCD.inp", "r", stdin);
        freopen("MCD.out", "w", stdout);
    }
    ios;
    cin >> a >> b;
    ll k = abs(sqrt(min(a, b)));
    for (int i = 1; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            ll x = a / i;
            if (b % i == 0)
                res = max(res, tcs(i));
            if (b % x == 0)
                res = max(res, tcs(x));
        }
    }
    cout << res;
}