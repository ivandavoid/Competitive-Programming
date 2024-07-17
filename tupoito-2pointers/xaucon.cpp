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

ll n, k, res, c = 0, tong;
vector<int> a;
string s;

signed main()
{
    if (fopen("xaucon.inp", "r"))
    {
        freopen("xaucon.inp", "r", stdin);
        freopen("xaucon.out", "w", stdout);
    }
    ios;
    cin >> n >> k;
    cin >> s;
    s = ' ' + s;
    for (char c : s)
    {
        a.pb((int)c);
    }
    for (int d = 1; d <= n; d++)
    {
        while (tong < k && c <= n)
        {
            c++;
            tong += a[c];
        }
        if (tong >= k && c <= n)
        {
            res += (n - c + 1);
        }
        tong -= a[d];
    }
    cout << res;
}