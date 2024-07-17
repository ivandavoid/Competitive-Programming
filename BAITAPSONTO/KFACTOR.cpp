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

ll k, a, b, res;

vector<bool> nt(1e7 + 5, true);
vector<int> prime;
vector<int> cc;
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
    for (int i = 2; i <= sqrt(k); i++)
    {
        if (k % i == 0)
        {
            prime.pb(i);
            if (k / i != i)
            {
                if (nt[k / i])
                {
                    prime.pb(k / i);
                }
            }
        }
    }
}

signed main()
{
    if (fopen("KFACTOR.inp", "r"))
    {
        freopen("KFACTOR.inp", "r", stdin);
        freopen("KFACTOR.out", "w", stdout);
    }
    ios;
    cin >> k >> a >> b;
    sieve();
    for (int i = a; i <= b; i++)
    {
        cc.pb(i);
    }
    for (auto i : cc)
    {
        for (int j = 0; j <= prime.size(); j++)
        {
            if (prime[j] <= k)
            {
                if (i % prime[j] == 0)
                {
                    i /= prime[j];
                }
            }
        }
    }
    for (auto i : cc)
    {
        if (i == 1)
        {
            res++;
        }
    }
    cout << res;
}