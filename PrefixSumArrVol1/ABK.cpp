#include<bits/stdc++.h>
#define int long long
using namespace std;

int q,a,b,k;

int solve(int a,int b,int k){
    int res=(b/k)-(a-1)/k;
    return res;
}

signed main()
{
    if(fopen("ABK.inp","r"))
    {
        freopen("ABK.inp","r",stdin);
        freopen("ABK.out","w",stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>q;
    while(q--){
        cin>>a>>b>>k;
        cout<<solve(a,b,k)<<"\n";
    }
}
