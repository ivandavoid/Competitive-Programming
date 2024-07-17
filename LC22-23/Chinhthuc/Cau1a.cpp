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

ll n, res1, res2;

signed main()
{
    if (fopen("Cau1a.inp", "r"))
    {
        freopen("Cau1a.inp", "r", stdin);
        freopen("Cau1a.out", "w", stdout);
    }
    ios;
    cin >> n;
    ll x = n;
    while (n > 1)
    {
        if (n % 2 == 0)
        {
            res1 += n / 2;
            n /= 2;
        }
        else
        {
            res1 = res1 + (n - 1) / 2;
            n = (n + 1) / 2;
        }
    }
    while (x > 1)
    {
        if (x % 2 == 0)
        {
            res2 += x / 2;
            x /= 2;
        }
        else
        {
            res2 += (x - 1) / 2;
            x = (x - 1) / 2;
        }
    }
    cout << res1 << '\n'
         << res2;
}