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

ll n, k, res, a[1000006], b[1000006];
vector<int> c;

signed main()
{
    if (fopen("CAU4.inp", "r"))
    {
        freopen("CAU4.inp", "r", stdin);
        freopen("CAU4.out", "w", stdout);
    }
    ios;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1, greater<int>());
    for (int i = 1; i <= k; i++)
    {
        c.push_back(a[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
        c.push_back(b[i]);
    }
    sort(c.begin(), c.end(), greater<int>());
    for (int i = 0; i < n; i++)
    {
        res += c[i];
    }
    cout << res;
}