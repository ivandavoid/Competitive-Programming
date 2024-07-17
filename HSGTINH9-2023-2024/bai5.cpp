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

int n, a[10000006], res;

void sub1()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i] > a[j])
            {
                res = max(res, a[i] % a[j]);
            }
        }
    }
    cout << res << '\n';
}

void others()
{
    vector<int> b;
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
    {
        if (a[n] % a[i] != 0)
        {
            b.pb(a[i]);
        }
    }
    for (int i = 0; i < b.size(); i++)
    {
        res = max(res, a[n] % b[i]);
    }
    cout << res;
}

signed main()
{
    if (fopen("bai5.inp", "r"))
    {
        freopen("bai5.inp", "r", stdin);
        freopen("bai5.out", "w", stdout);
    }
    ios;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    if (n <= 1e3)
    {
        sub1();
    }
    else
    {
        others();
    }
}