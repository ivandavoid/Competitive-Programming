#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 5;
const int MOD = 1e9 + 7;
bool prime[MAX];
vector<int> primes;
long long prefix[MAX];
int pos[MAX];

void sieve()
{
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= MAX; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= MAX; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= MAX; p++)
        if (prime[p])
            primes.push_back(p);
}

void precompute()
{
    prefix[0] = primes[0];
    for (int i = 1; i < primes.size(); i++)
        prefix[i] = (prefix[i - 1] + 1LL * primes[i] * (i + 1)) % MOD;
    for (int i = 0; i < primes.size(); i++)
        pos[primes[i]] = i;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    precompute();
    int T;
    cin >> T;
    while (T--)
    {
        int l, r;
        cin >> l >> r;
        auto left = pos[l];
        auto right = pos[r];
        long long ans = (prefix[right] - (left == 0 ? 0 : prefix[left - 1])) % MOD;
        cout << ans % MOD << "\n";
    }
}
