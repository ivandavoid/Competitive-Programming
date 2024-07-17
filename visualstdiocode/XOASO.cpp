#include <bits/stdc++.h>
#define pb push_back
#define pp pop_back
#define lb lower_bound
#define ub upper_bound
#define fi first
#define se second
#define ll long long
#define ull unsigned long long
#define str string
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vii vector<int>
#define vll vector<long long>
#define mpii map<int, int>
#define mpsi map<string, int>
using namespace std;

ll n, x, res, c, l, s;

signed main()
{
    if (fopen("name.inp", "r"))
    {
        freopen("name.inp", "r", stdin);
        freopen("name.out", "w", stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        s += x;
        if (x % 2 == 0)
        {
            c++;
        }
        else
        {
            l++;
        }
    }
    if (s % 2)
    {
        res = l * c;
    }
    else
    {
        res = l * (l - 1) / 2 + c * (c - 1) / 2;
    }
    cout << res;
}