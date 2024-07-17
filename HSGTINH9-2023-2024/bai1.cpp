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

ll a, b, k;

signed main()
{
    if (fopen("bai1.inp", "r"))
    {
        freopen("bai1.inp", "r", stdin);
        freopen("bai1.out", "w", stdout);
    }
    ios;
    cin >> a >> b >> k;
    if (k % 2 == 0)
    {
        ll x = b / k - (a - 1) / k;
        if (x % 2 == 0)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
    else
    {
        cout << "NO"
             << "\n";
    }
}