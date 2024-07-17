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

int t;
string s;

signed main()
{
    if (fopen("bai4.inp", "r"))
    {
        freopen("bai4.inp", "r", stdin);
        freopen("bai4.out", "w", stdout);
    }
    ios;
    cin >> t;
    while (t--)
    {
        bool check = 0;
        map<char, int> cnt;
        cin >> s;
        for (char c : s)
        {
            cnt[c]++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (cnt[s[i]] == 1)
            {
                cout << i + 1 << "\n";
                check = 1;
                break;
            }
        }
        if (!check)
        {
            cout << -1 << "\n";
        }
    }
}