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

ll a, b;

ll rev(ll n)
{
    ll res = 0;
    while (n != 0)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

signed main()
{
    if (fopen("Cau1a.inp", "r"))
    {
        freopen("Cau1a.inp", "r", stdin);
        freopen("Cau1a.out", "w", stdout);
    }
    ios;
    cin >> a >> b;
    a = rev(a), b = rev(b);
    cout << max(a, b);
}