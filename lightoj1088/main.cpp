#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t,n,q,i,j,p;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        vector <ll> a;
        scanf("%lld %lld",&n,&q);
        cout<<"Case "<<i+1<<":"<<endl;
        for(j=0;j<n;j++)
        {
            scanf("%lld",&p);
            a.push_back(p);
            //cout<<p<<endl;
        }
        ll c,b;
        for(j=0;j<q;j++) {
            scanf("%lld %lld",&b,&c);
            //cout<<b<<" "<<c<<endl;
            b=(lower_bound(a.begin(),a.end(),b))-a.begin();
            c=(upper_bound(a.begin(),a.end(),c))-a.begin();
            //cout<<b<<c<<endl;
            if(b<=c)
                printf("%lld\n",c-b);
            else
                printf("0\n");
        }
    }
    return 0;
}
