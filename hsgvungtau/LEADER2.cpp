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

ll n, a[1000006], s[1000006], k, res;

signed main()
{
    if (fopen("LEADER2.inp", "r"))
    {
        freopen("LEADER2.inp", "r", stdin);
        freopen("LEADER2.out", "w", stdout);
    }
    ios;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = n; i >= 1; i--)
    {
        if (a[i] >= res)
        {
            k++;
            s[k] = a[i];
            res = max(res, a[i]);
        }
    }
    for (int i = k; i >= 1; i--)
    {
        cout << s[i] << " ";
    }
}