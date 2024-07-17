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

int prx[1000006], s[1000006];

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
    int j = 1;
    for (int i = 1; i <= 1e7; i++)
    {
        if (nt[i])
        {
            prx[j] = prx[j - 1] + 1;
            s[j] += s[j - 1] + i;
            j++;
        }
    }
}

signed main()
{
    ios;
    sieve();
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << setprecision(2) << fixed << (double)(s[b] - s[a - 1]) / (prx[b] - prx[a - 1]) << '\n';
    }
}