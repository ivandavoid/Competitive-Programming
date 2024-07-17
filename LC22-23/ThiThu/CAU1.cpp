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
using namespace std;

ll a, b, res;

vector<int> nt(1e6 + 5, 1);
void sieve()
{
    for (int i = 2; i <= 1e6; i++)
    {
        for (int j = 2 * i; j <= 1e6; j += i)
        {
            nt[j] += i;
        }
    }
}

signed main()
{
    if (fopen("CAU1.inp", "r"))
    {
        freopen("CAU1.inp", "r", stdin);
        freopen("CAU1.out", "w", stdout);
    }
    ios;
    sieve();
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (nt[i] > i)
        {
            res++;
        }
    }
    cout << res;
}