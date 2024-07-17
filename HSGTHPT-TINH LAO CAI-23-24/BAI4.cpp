#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,t,res;

void sub1()
{
    pair<int,int> a[20];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    for(int mask=0; mask<(1<<n); mask++)
    {
        int s=0,temp=0,cnt=0;
        for(int i=1; i<=n; i++)
        {
            if((mask>>(i-1)&1))
            {
                s+=a[i].second+abs(a[i].first-a[temp].first);
                temp=i;
                cnt++;
            }
        }
        if(s>t)
        {
            s=0;
        }
        else
        {
            res=max(res,cnt);
        }
    }
    cout<<res;
}

void subacc()
{
    pair<int,int> a[100007];
    priority_queue<int> pq;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    int cnt=0,s=0;
    for(int i=1; i<=n; i++)
    {
        cnt++;
        s+=a[i].second;
        pq.push(a[i].second);
        while(!pq.empty()&&s+a[i].first>t)
        {
            int top=pq.top();
            cnt--;
            s-=top;
            pq.pop();
        }
        res=max(res,cnt);
    }
    cout<<res;
}

signed main()
{
    if(fopen("BAI4.inp","r"))
    {
        freopen("BAI4.inp","r",stdin);
        freopen("BAI4.out","w",stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>t;
    if(n<=20)
    {
        sub1();
    }
    else
    {
        subacc();
    }
}