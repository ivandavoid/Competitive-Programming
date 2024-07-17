#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,a[1000006],l,r,x,q;

signed main()
{
    if(fopen("SUMQ.inp","r"))
    {
        freopen("SUMQ.inp","r",stdin);
        freopen("SUMQ.out","w",stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>q;
    int i=1;
    while(n--){
        cin>>x;
        a[i]=a[i-1]+x;
        i++;
    }
    while(q--){
        cin>>l>>r;
        cout<<a[r]-a[l-1]<<"\n";
    }
}
