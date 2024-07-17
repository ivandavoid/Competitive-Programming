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

ll n, res;

vector<ll> nt(5e6 + 5, 0);
void sieve()
{
    for (int i = 2; i <= 5e6; i++)
    {
        if (nt[i] == 0)
        {
            for (int j = i; j <= 5e6; j += i)
            {
                nt[j]++;
            }
        }
    }
}

signed main()
{
    if (fopen("Cau3b.inp", "r"))
    {
        freopen("Cau3b.inp", "r", stdin);
        freopen("Cau3b.out", "w", stdout);
    }
    ios;
    sieve();
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        res += (nt[i] == 2);
    }
    cout << res;
}