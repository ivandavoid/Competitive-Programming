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

int n, k, a[1000005], l[1000005], r[1000005], res;

signed main()
{
    if (fopen("DIAMOND.inp", "r"))
    {
        freopen("DIAMOND.inp", "r", stdin);
        freopen("DIAMOND.out", "w", stdout);
    }
    ios;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    // 1 5 5 9 10 12 14
    int c = 0;
    for (int d = 1; d <= n; d++)
    {
        while (a[c + 1] - a[d] <= k && c < n)
        {
            c++;
            l[c] = c - d + 1;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        l[i] = max(l[i], l[i - 1]);
    }
    c = n + 1;
    for (int d = n; d >= 1; d--)
    {
        while (a[d] - a[c - 1] <= k && c > 0)
        {
            c--;
            r[c] = d - c + 1;
        }
    }
    for (int i = n; i >= 1; i--)
    {
        r[i] = max(r[i], r[i + 1]);
    }
    for (int i = 1; i < n; i++)
    {
        res = max(res, l[i] + r[i + 1]);
    }
    cout << res;
}