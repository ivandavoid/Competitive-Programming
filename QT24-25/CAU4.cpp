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

ll n, res, a[200006];

signed main()
{
    if (fopen("CAU4.inp", "r"))
    {
        freopen("CAU4.inp", "r", stdin);
        freopen("CAU4.out", "w", stdout);
    }
    ios;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int j = 1; j <= 9; j++)
    {
        ll cnt[10] = {0};
        for (int i = 1; i <= n; i++)
        {
            if (a[i] > 0)
            {
                cnt[a[i] % 10]++;
                a[i] = a[i] / 10;
            }
        }
        for (int i = 0; i <= 9; i++)
        {
            res += (cnt[i] * (cnt[i] - 1)) / 2;
        }
    }
    cout << res;
}