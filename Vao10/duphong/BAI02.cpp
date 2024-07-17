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

ll n, a[100005], res;

ll cal(ll n)
{
    ll res = 0;
    if (n == 1)
        return 0;
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            res += i;
            if (n / i != i)
            {
                res += n / i;
            }
        }
    }
    ll x = sqrt(n);
    if (x * x == n)
        res -= x;
    return res;
}
ll solve(ll arr[], ll n)
{
    int len = 1, res = 0;
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] > arr[i - 1])
            len++;
        else
        {
            if (res < len)
                res = len;
            len = 1;
        }
    }
    if (res < len)
        res = len;
    return res;
}

signed main()
{
    if (fopen("BAI02.inp", "r"))
    {
        freopen("BAI02.inp", "r", stdin);
        freopen("BAI02.out", "w", stdout);
    }
    ios;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        res += (cal(a[i]) - a[i] == a[i]);
    }
    cout << res << "\n"
         << solve(a, n);
}