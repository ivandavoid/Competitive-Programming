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

ll n, x, ans[10000005];

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
    for (int i = 2; i <= 1e7; i++)
    {
        if (nt[i])
        {
            ans[i] = i;
        }
        else
        {
            ans[i] = ans[i - 1];
        }
    }
}

signed main()
{
    if (fopen("CLOPRIME.inp", "r"))
    {
        freopen("CLOPRIME.inp", "r", stdin);
        freopen("CLOPRIME.out", "w", stdout);
    }
    ios;
    sieve();
    cin >> n;
    while (n--)
    {
        cin >> x;
        cout << ans[x] << "\n";
    }
}