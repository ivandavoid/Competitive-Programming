#include<bits/stdc++.h>
using namespace std;

int n,a[1000005],b,x,q;
vector<int> arr(1e6,INT_MIN);

signed main()
{
    if(fopen("MAXARRAY.inp","r"))
    {
        freopen("MAXARRAY.inp","r",stdin);
        freopen("MAXARRAY.out","w",stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        arr[i]=max(arr[i-1],a[i]);
    }
    while(q--){
        cin>>x;
        cout<<arr[x]<<"\n";
    }
}
