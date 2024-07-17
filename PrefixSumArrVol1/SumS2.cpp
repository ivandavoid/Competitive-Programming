#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,s,res,a,sum;
map<int,int> cnt;

signed main()
{
    if(fopen("SumS2.inp","r"))
    {
        freopen("SumS2.inp","r",stdin);
        freopen("SumS2.out","w",stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>s;
    cnt[0]=1;
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        sum=sum+a;
        if(sum>=s)
            res=res+cnt[sum-s];
        cnt[sum]++;
    }
    cout<<res;
}
