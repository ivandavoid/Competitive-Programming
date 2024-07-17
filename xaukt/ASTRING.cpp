#include <bits/stdc++.h>
using namespace std;

string s;

signed main()
{
    // freopen("ASTRING.inp", "r", stdin);
    // freopen("ASTRING.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> s;
    reverse(s.begin(), s.end());
    cout << s;
}
