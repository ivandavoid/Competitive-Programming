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

string s, t;
vector<string> a;

bool check(string s1, string s2)
{
    while (s1.sz < s2.sz)
    {
        s1 = '0' + s1;
    }
    while (s1.sz > s2.sz)
    {
        s2 = '0' + s2;
    }
    return s1 < s2;
}

bool check1(string a)
{
    for (char c : a)
    {
        if (c > '9')
        {
            return 0;
        }
    }
    return 1;
}

signed main()
{
    if (fopen("SORTSTRING.inp", "r"))
    {
        freopen("SORTSTRING.inp", "r", stdin);
        freopen("SORTSTRING.out", "w", stdout);
    }
    ios;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        t += s[i];
        if ((isdigit(s[i]) && islower(s[i + 1])) || (islower(s[i]) && isdigit(s[i + 1])))
        {
            a.pb(t);
            t = "";
        }
    }
    a.pb(t);
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            if (check(a[j], a[i]) && check1(a[i]) && check1(a[j]))
            {
                swap(a[i], a[j]);
            }
        }
    }
    for (auto i : a)
    {
        cout << i;
    }
}