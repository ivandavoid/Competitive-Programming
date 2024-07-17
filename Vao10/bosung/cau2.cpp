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

ll n, res = 1;

signed main()
{
    if (fopen("cau2.inp", "r"))
    {
        freopen("cau2.inp", "r", stdin);
        freopen("cau2.out", "w", stdout);
    }
    ios;
    cin >> n;
    for (ll i = 2; i * i <= n; i++)
    {
        ll cnt = 0;
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cnt++;
                n /= i;
                res *= i;
            }
        }
        if (cnt % 2)
        {
            res *= i;
        }
    }
    if (n > 1)
    {
        res *= n;
    }
    cout << res * n;
}