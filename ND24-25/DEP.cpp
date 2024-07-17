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

ll n, a[200005], prx[200005], minn[200005], res = INT_MIN;

signed main()
{
    if (fopen("DEP.inp", "r"))
    {
        freopen("DEP.inp", "r", stdin);
        freopen("DEP.out", "w", stdout);
    }
    ios;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] % 3 == 0)
        {
            prx[i] = 0;
            minn[i] = 0;
        }
        else
        {
            prx[i] = prx[i - 1] + a[i];
            res = max(res, prx[i] - minn[i - 1]);
            minn[i] = min(minn[i - 1], prx[i]);
        }
    }
    cout << res;
}