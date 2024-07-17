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
const int MOD = 1e9;
using namespace std;

ll t, a, b, c;

ll gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return ((a / gcd(a, b) * b));
}

signed main()
{
    if (fopen("MINX.inp", "r"))
    {
        freopen("MINX.inp", "r", stdin);
        freopen("MINX.out", "w", stdout);
    }
    ios;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        ll x = gcd(gcd(a, b), c);
        ll res = lcm(a, lcm(b, c));
        cout << res / x << "\n";
    }
}