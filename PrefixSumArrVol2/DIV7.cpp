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

ll n, x, res, s;
vector<ll> vt(7, -1);

signed main()
{
    if (fopen("DIV7.inp", "r"))
    {
        freopen("DIV7.inp", "r", stdin);
        freopen("DIV7.out", "w", stdout);
    }
    ios;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        s = (s + x) % 7;
        if (vt[s] != -1)
        {
            res = max(res, i - vt[s]);
        }
        else
        {
            vt[s] = i;
        }
    }
    cout << res;
}