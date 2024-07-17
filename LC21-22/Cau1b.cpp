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
    ll res = 0;
    while (n != 0)
    {
        res += n % 10;
        n /= 10;
    }
    return (res % 2) == 0;
}

vector<bool> nt(1e7 + 5, true);
void sieve()
{
    nt[0] = nt[1] = 0;
    for (int i = 2; i * i <= 1e7; i++)
    {
        if (nt[i])
        {
            for (int j = i * i; j <= 1e7; j += i)
            {
                nt[j] = 0;
            }
        }
    }
}

signed main()
{
    if (fopen("Cau1b.inp", "r"))
    {
        freopen("Cau1b.inp", "r", stdin);
        freopen("Cau1b.out", "w", stdout);
    }
    ios;
    sieve();
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (nt[i])
        {
            res += check(i);
        }
    }
    cout << res;
}