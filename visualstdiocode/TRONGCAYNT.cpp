#include <bits/stdc++.h>
#define pb push_back
#define pp pop_back
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
using namespace std;

ll n, x, check, d;
vb nt(1e7 + 5, true);
vii a;

void sieve()
{
    nt[0] = nt[1] = 0;
    for (int i = 2; i <= sqrt(1e7); i++)
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
    if (fopen("name.inp", "r"))
    {
        freopen("name.inp", "r", stdin);
        freopen("name.out", "w", stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sieve();
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (nt[x])
        {
            a.pb(x);
            check = 1;
            d++;
        }
    }
    if (check == 0)
    {
        cout << -1;
        return 0;
    }
    else
    {
        sort(a.begin(), a.end());
        for (int i = a.size() - 1; i >= 0; i--)
        {
            if ((i + 1) % 2 == 1)
            {
                cout << a[i] << " ";
            }
        }
        for (int i = 0; i < a.size(); i++)
        {
            if ((i + 1) % 2 == 0)
            {
                cout << a[i] << " ";
            }
        }
    }
}