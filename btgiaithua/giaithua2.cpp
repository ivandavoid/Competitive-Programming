#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,res;

int dem0(int n)
{
    int res=0;
    while(n>0){
        res+=n/5;
        n/=5;
    }
    return res;
}

int bs(int l,int r,int n)
{
    int res=0;
    while(l<=r)
    {
        int mid=(l+r)>>1;
        if(dem0(mid)>n)
        {
            r=mid-1;
        }
        else{
            res=mid;
            l=mid+1;
        }
    }
    return res;
}

signed main()
{
    if(fopen("giaithua2.inp","r"))
    {
        freopen("giaithua2.inp","r",stdin);
        freopen("giaithua2.out","w",stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    cout<<bs(1,1e14,n);
}
