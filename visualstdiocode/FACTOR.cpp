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

void solve(ll n)
{
    vector<int> res;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                res.pb(i);
                n /= i;
            }
        }
    }
    if (n > 1)
    {
        res.pb(n);
    }
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i];
        if (i != res.size() - 1)
        {
            cout << "*";
        }
        else
        {
            cout << "\n";
        }
    }
}

signed main()
{
    if (fopen("FACTOR.inp", "r"))
    {
        freopen("FACTOR.inp", "r", stdin);
        freopen("FACTOR.out", "w", stdout);
    }
    ios;
    cin >> t;
    while (t--)
    {
        cin >> n;
        solve(n);
    }
}
