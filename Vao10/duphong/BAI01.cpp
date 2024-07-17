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

ll res, a, b;

bool check(ll n)
{
    if (n < 10)
        return 0;
    else
    {
        ll x = n, res = 0;
        while (n != 0)
        {
            res = res * 10 + n % 10;
            n /= 10;
        }
        return (res == x);
    }
}

signed main()
{
    if (fopen("BAI01.inp", "r"))
    {
        freopen("BAI01.inp", "r", stdin);
        freopen("BAI01.out", "w", stdout);
    }
    ios;
    cin >> a >> b;
    for (ll i = a; i <= b; i++)
    {
        res += check(i);
    }
    cout << res;
}