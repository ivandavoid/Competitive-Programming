#include<bits/stdc++.h>
#define int long long
using namespace std;
void phantich(int n) {
   for(int i=2; i<=sqrt(n); i++)
      while(n%i==0) {
         cout<<i<<" ";
         n=n/i;
      }
   if(n>1)
      cout<<n;
}
main() {
   int n,t;
   freopen("prime1.inp","r",stdin);
//   freopen("prime1.out","w",stdout);
   cin>>t;
   while(t--) {
      cin>>n;
      phantich(n);
      cout<<endl;
   }
}
