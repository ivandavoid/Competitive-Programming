#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,s,res,a[1000006],sum;
map<int,int> cnt;

signed main()
{
    if(fopen("DIVN.inp","r"))
    {
        freopen("DIVN.inp","r",stdin);
        freopen("DIVN.out","w",stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>s;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    cnt[0]=1;
    for(int i=1; i<=n; i++)
    {
        sum=(sum+a[i])%s;
        res=res+cnt[sum];
        cnt[sum]++;
    }
    cout<<res;
}
