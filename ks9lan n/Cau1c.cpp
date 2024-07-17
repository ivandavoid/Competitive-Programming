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
const int MOD = 1e9 + 7;
using namespace std;

ll n;

signed main()
{
    if (fopen("Cau1c.inp", "r"))
    {
        freopen("Cau1c.inp", "r", stdin);
        freopen("Cau1c.out", "w", stdout);
    }
    ios;
    cin >> n;
    n += 1;
    ll x = n + 1, y = n + 2, z = n + 3;
    if (n % 4 == 0)
    {
        n /= 4;
    }
    else if (x % 4 == 0)
    {
        x /= 4;
    }
    else if (y % 4 == 0)
    {
        y /= 4;
    }
    else if (z % 4 == 0)
    {
        z /= 4;
    }
    cout << (((n * x) % MOD) * ((y * z) % MOD)) % MOD;
}