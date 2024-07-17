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

vector<ll> a;

bool cmp(ll a, ll b)
{
    ll choose;
    while (a > 0 && b > 0)
    {
        if (a % 10 > b % 10)
            choose = 1;
        else
            choose = 2;
        a /= 10;
        b /= 10;
    }
    if (choose == 1)
        return 1;
    return 0;
}

signed main()
{
    if (fopen("name.inp", "r"))
    {
        freopen("name.inp", "r", stdin);
        freopen("name.out", "w", stdout);
    }
    ios;
    cin >> n;
    while (n--)
    {
        cin >> x;
        a.pb(x);
    }
    sort(a.begin(), a.end(), cmp);
    for (auto i : a)
        cout << i << " ";
}