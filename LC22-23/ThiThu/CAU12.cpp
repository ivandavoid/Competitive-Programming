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
using namespace std;

ll n, a[1000006], res;

signed main()
{
    if (fopen("CAU12.inp", "r"))
    {
        freopen("CAU12.inp", "r", stdin);
        freopen("CAU12.out", "w", stdout);
    }
    ios;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll max1 = INT_MIN, min1 = INT_MAX;
    ll max2 = INT_MIN, min2 = INT_MAX;
    ll max3 = INT_MIN, min3 = INT_MAX;
    ll max4 = INT_MIN, min4 = INT_MAX;
    for (ll i = 1; i <= n; ++i)
    {
        ll b = a[i] + i;
        ll c = a[i] - i;
        ll d = -a[i] + i;
        ll e = -a[i] - i;
        max1 = max(max1, b);
        min1 = min(min1, b);
        max2 = max(max2, c);
        min2 = min(min2, c);
        max3 = max(max3, d);
        min3 = min(min3, d);
        max4 = max(max4, e);
        min4 = min(min4, e);
    }
    res = max({max1 - min1, max2 - min2, max3 - min3, max4 - min4});
    cout << res;
}