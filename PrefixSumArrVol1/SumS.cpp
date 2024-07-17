#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,x,s,res;
map<int,int> cnt;

signed main()
{
    if(fopen("SumS.inp","r"))
    {
        freopen("SumS.inp","r",stdin);
        freopen("SumS.out","w",stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>s;
    while(n--){
        cin>>x;
        res+=cnt[s-x];
        cnt[x]++;
    }
    cout<<res;
}
