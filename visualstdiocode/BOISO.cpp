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

int n, a, b, c;

signed main()
{
    if (fopen("name.inp", "r"))
    {
        freopen("name.inp", "r", stdin);
        freopen("name.out", "w", stdout);
    }
    ios;
    cin >> n >> a >> b >> c;
    vector<bool> multiples(n + 1, false);
    for (int i = a; i <= n; i += a)
    {
        if (i % b == 0 && i % c == 0)
            multiples[i] = true;
    }
    bool found = false;
    for (int i = 1; i <= n; ++i)
    {
        if (multiples[i])
        {
            cout << i << " ";
            found = true;
        }
    }
    if (!found)
        cout << -1;
}