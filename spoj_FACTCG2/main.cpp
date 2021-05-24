#include <bits/stdc++.h>
#define max 10000007
#define ll long long int
bool isprime[max+1];
using namespace std;
ll a[max+1];
void prf()
{
    memset(a,-1,sizeof(a));
    for(ll i=2;i<=10000007;i++)
    {
        if(a[i]==-1)
        {
            a[i]=i;
            for(ll j=i*i;j<=10000007;j=j+i)
            {
                a[j]=i;
            }
        }
    }
}
int main() {
    prf();
    ll n,i,x,f=0;
    while(scanf("%lld",&n)==1)
    {
        vector <int>v;
        while(n>1)
        {
            // cout<<a[n];
            v.push_back(a[n]);
            n=n/a[n];
        }
        sort(v.begin(),v.end());
        printf("1");
        for(ll j=0;j<v.size();j++)
        {
            printf(" x %d",v[j]);
        }
        printf("\n");
    }
    return 0;
}
