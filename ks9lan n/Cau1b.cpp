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
const int MOD = 1e9 + 7;
using namespace std;

ll n;

signed main()
{
    if (fopen("Cau1b.inp", "r"))
    {
        freopen("Cau1b.inp", "r", stdin);
        freopen("Cau1b.out", "w", stdout);
    }
    ios;
    cin >> n;
    double res = (1.0 / 2 - 1.0 / ((n + 2) * (n + 3))) / 2.0;
    cout << fixed << setprecision(6) << res;
}