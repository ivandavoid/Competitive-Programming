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

ll a, b, res;

bool check(ll n)
{
    int x = n, res = 0;
    while (n != 0)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res == x;
}

vector<ll> nt(1e7 + 5, 1);
void sieve()
{
    nt[0] = nt[1] = 0;
    for (ll i = 2; i * i <= 1e7; i++)
    {
        if (nt[i])
        {
            for (ll j = i * i; j <= 1e7; j += i)
            {
                nt[j] = 0;
            }
        }
    }
    for (ll i = 2; i <= 1e7; i++)
    {
        if (nt[i])
        {
            if (!check(i))
            {
                nt[i] = 0;
            }
        }
    }
}

signed main()
{
    if (fopen("Cau1.inp", "r"))
    {
        freopen("Cau1.inp", "r", stdin);
        freopen("Cau1.out", "w", stdout);
    }
    ios;
    sieve();
    cin >> a >> b;
    for (ll i = a; i <= b; i++)
    {
        res += nt[i];
    }
    cout << res;
}