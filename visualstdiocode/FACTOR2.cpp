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

ll t, n;

ll solve(ll n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return i;
            while (n % i == 0)
            {

                n /= i;
            }
        }
    }
}

ll calc(ll low, ll n)
{
    ll res = 0;
    if (low > sqrt(n))
    {
        return 0;
    }
    for (ll i = low; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            res += 1 + calc(i, n / i);
        }
    }
    return res;
}

signed main()
{
    if (fopen("FACTOR2.inp", "r"))
    {
        freopen("FACTOR2.inp", "r", stdin);
        freopen("FACTOR2.out", "w", stdout);
    }
    ios;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << calc(2, n) << "\n";
    }
}
