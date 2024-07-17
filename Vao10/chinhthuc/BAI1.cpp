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

ll n, a, b, c, res;

ll cntdiv(ll a, ll b)
{
    return a / b;
}

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

signed main()
{
    if (fopen("BAI1.inp", "r"))
    {
        freopen("BAI1.inp", "r", stdin);
        freopen("BAI1.out", "w", stdout);
    }
    ios;
    cin >> n >> a >> b >> c;
    ll ac = lcm(a, c);
    ll bc = lcm(b, c);
    ll ab = lcm(a, b);
    ll abc = lcm(lcm(a, b), c);
    res += cntdiv(n, ab) + cntdiv(n, bc) + cntdiv(n, ac);
    res -= 3 * cntdiv(n, abc);
    cout << res;
}