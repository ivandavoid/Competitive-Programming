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

ll n, k, a[1000006], L[1000006], R[1000006], res;

signed main()
{
    if (fopen("CAU5.inp", "r"))
    {
        freopen("CAU5.inp", "r", stdin);
        freopen("CAU5.out", "w", stdout);
    }
    ios;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        L[i] = L[i - 1] + a[i];
    }
    for (int i = n; i >= 1; i--)
    {
        R[i] = R[i + 1] + a[i];
    }
    for (int i = 1; i <= k; i++)
    {
        ll r = n - k + i + 1;
        res = max({res, L[i] + R[r], L[k - i] + R[n - i + 1]});
    }
    cout << res;
}
