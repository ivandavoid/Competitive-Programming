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

ll n, res, a[1000006];

signed main()
{
    if (fopen("DOANCON2.inp", "r"))
    {
        freopen("DOANCON2.inp", "r", stdin);
        freopen("DOANCON2.out", "w", stdout);
    }
    ios;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll c = 1, d = 1;
    while (c <= n)
    {
        if (a[c + 1] * a[c] < 0 && c < n)
        {
            c++;
        }
        else
        {
            res = max(res, c - d + 1);
            d = c + 1;
            c++;
        }
    }
    cout << res;
}