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

ll x, n;
vector<int> a;

ll combine(ll a, ll b)
{
    ll c = b;
    while (c > 0)
    {
        a = a * 10;
        c = c / 10;
    }
    return a + b;
}
bool cmp(ll a, ll b)
{
    return combine(a, b) > combine(b, a);
}
void pt(ll x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            while (x % i == 0)
            {
                a.pb(i);
                x /= i;
            }
        }
    }
    if (x > 1)
    {
        a.pb(x);
    }
}

int nt[3000006];
void sieve()
{
    for (int i = 2; i * i <= 3e6; ++i)
    {
        if (nt[i] == 0)
        {
            for (int j = i * i; j <= 3e6; j += i)
            {
                if (nt[j] == 0)
                {
                    nt[j] = i;
                }
            }
        }
    }
    for (int i = 2; i <= 3e6; ++i)
    {
        if (nt[i] == 0)
        {
            nt[i] = i;
        }
    }
}

void fastpt(ll n)
{
    while (n > 1)
    {
        a.pb(nt[n]);
        n /= nt[n];
    }
}

void sub1()
{
    cin >> x;
    pt(x);
    sort(a.begin(), a.end(), cmp);
    for (auto i : a)
    {
        cout << i;
    }
}

void sub2()
{
    while (n--)
    {
        cin >> x;
        fastpt(x);
    }
    sort(a.begin(), a.end(), cmp);
    for (auto i : a)
    {
        cout << i;
    }
}

signed main()
{
    if (fopen("Cau4.inp", "r"))
    {
        freopen("Cau4.inp", "r", stdin);
        freopen("Cau4.out", "w", stdout);
    }
    ios;
    sieve();
    cin >> n;
    if (n == 1)
    {
        sub1();
    }
    else
    {
        sub2();
    }
}