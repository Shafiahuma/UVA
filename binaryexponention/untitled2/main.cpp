#include <bits/stdc++.h>
#define ll long long int
#define max 1000000000
using namespace std;
ll sum(ll a)
{
    ll s=0;
    while(a) {
        s = s + (a / 5);
        a = a / 5;
    }
    return s;
}
int main() {
    ll t,i,q;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&q);
        ll l=0,r=max,d,res=0;
        while(l<=r)
        {ll mid=(l+r)/2;
          d=sum(mid);
          if(d==q) {
              res=mid;
              r=mid-1;
          }
          else if(d<q)
              l=mid+1;
          else
              r=mid-1;
        }
        if(!res)
            printf("Case %lld: impossible\n",i+1);
        else
            printf("Case %lld: %lld\n",i+1,res);

    }
    return 0;
}
