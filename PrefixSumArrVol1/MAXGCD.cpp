#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,a[1000006],l[1000006],r[1000006];

signed main()
{
    if(fopen("MAXGCD.inp","r"))
    {
        freopen("MAXGCD.inp","r",stdin);
        freopen("MAXGCD.out","w",stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    l[1]=a[1];
    r[n]=a[n];
    for(int i=2; i<=n; i++)
        l[i]=__gcd(l[i-1],a[i]);
    for(int i=n-1; i>=1; i--)
        r[i]=__gcd(r[i+1],a[i]);
    int res=INT_MIN;
    for(int i=2; i<n; i++)
    {
        res=max(res,__gcd(l[i-1],r[i+1]));
    }
    cout<<res;
}
