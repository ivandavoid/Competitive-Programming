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

ll a, b, d, c;

signed main()
{
    if (fopen("cau1.inp", "r"))
    {
        freopen("cau1.inp", "r", stdin);
        freopen("cau1.out", "w", stdout);
    }
    ios;
    cin >> a >> b;
    while (a % 9 != 0)
    {
        a++;
    }
    while (b % 9 != 0)
    {
        b--;
    }
    cout << ((a + b) * ((b - a) / 9 + 1)) / 2;
}