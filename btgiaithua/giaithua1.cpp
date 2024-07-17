#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,res;

signed main()
{
    if(fopen("giaithua1.inp","r")){
    freopen("giaithua1.inp","r",stdin);
    freopen("giaithua1.out","w",stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    while(n>0){
        res+=n/5;
        n/=5;
    }
    cout<<res;
}
