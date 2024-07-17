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

string a, b;

ll solve(string a, string b)
{
    ll x = a[a.size() - 1] - '0';
    if (b == "0")
    {
        return 1;
    }
    ll be;
    for (int i = 0; i < b.size(); i++)
        be = (be * 10 + b[i] - 48) % 4;
    be %= 4;
    if (be == 0)
    {
        be = 4;
    }
    ll res = pow(x, be);
    return res % 10;
}

signed main()
{
    if (fopen("Cau1.inp", "r"))
    {
        freopen("Cau1.inp", "r", stdin);
        freopen("Cau1.out", "w", stdout);
    }
    ios;
    cin >> a >> b;
    cout << solve(a, b);
}