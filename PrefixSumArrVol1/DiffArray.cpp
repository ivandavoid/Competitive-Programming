#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,a[1000006],q,l,r,x;

signed main()
{
    if(fopen("DiffArray.inp","r"))
    {
        freopen("DiffArray.inp","r",stdin);
        freopen("DiffArray.out","w",stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>q;
    for(int i=1; i<=q; i++)
    {
        cin>>l>>r>>x;
        a[l]+=x;
        a[r+1]-=x;

    }
    for(int i=1; i<=n; i++)
    {
        a[i]=a[i-1]+a[i];
    }
    for(int i=1; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }
}
