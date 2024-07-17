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

ll n, m, x;
vector<ll> res;

signed main()
{
    if (fopen("Cau3.inp", "r"))
    {
        freopen("Cau3.inp", "r", stdin);
        freopen("Cau3.out", "w", stdout);
    }
    ios;
    cin >> n >> m;
    vector<bool> check(n + 1, 1);
    while (m--)
    {
        cin >> x;
        check[x] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        if (check[i])
        {
            res.pb(i);
        }
    }
    cout << res.size() << "\n";
    for (auto i : res)
    {
        cout << i << " ";
    }
}