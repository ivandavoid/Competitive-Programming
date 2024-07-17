#include<bits/stdc++.h>
#define int long long
const int MOD=1000000007;
using namespace std;

int n,res=1,nt[10000007],dem[1000006];

void sieve()
{
    for(int i=2; i<=sqrt(1e6); i++)
        if(nt[i]==0)
            for(int j=i; j<=1e6; j+=i)
                nt[j]=i;
    for(int i=1; i<=1e6; i++)
        if(nt[i]==0)
            nt[i]=i;

}
/// nt[i] la so nguyen to lon nhat k ma i%k==0

void pt(int n)
{
    while(n>1)
    {
        dem[nt[n]]++; /// tang so mu them 1
        n/=nt[n];
    }
}

signed main()
{
    if(fopen("giaithua4.inp","r"))
    {
        freopen("giaithua4.inp","r",stdin);
        freopen("giaithua4.out","w",stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sieve();
    cin>>n;
    for(int i=2; i<=n; i++)
    {
        pt(i);
    }
    for(int i=2; i<=n; i++)
    {
        res=res*(dem[i]+1)%MOD;
    }
    cout<<res;
}
