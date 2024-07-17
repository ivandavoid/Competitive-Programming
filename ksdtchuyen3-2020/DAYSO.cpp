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

ll n, a[100005], k, res;

bool check(ll a[], ll k)
{
}

signed main()
{
    if (fopen("DAYSO.inp", "r"))
    {
        freopen("DAYSO.inp", "r", stdin);
        freopen("DAYSO.out", "w", stdout);
    }
    ios;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll gcd = a[1];
    for (int i = 1; i <= n; i++)
    {
        gcd = __gcd(gcd, a[i]);
    }
    for (int i = 1; i <= sqrt(gcd); i++)
    {
        if (gcd % i == 0)
        {
            if (i > 1)
                res = max(res, k / i * i);
            res = max(res, k / (gcd / i) * (gcd / i));
        }
    }
    cout << res;
}