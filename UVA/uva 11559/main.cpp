#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ll n,b,h,w;
    while(scanf("%lld %lld %lld %lld",&n,&b,&h,&w)==4)
    {
        ll a[20],x[20],i,j,sum,s[h+1],k=0;
        for(i=0;i<h;i++)
        {
            cin>>a[i];
            sum=0;
            ll flag=0;
            for(j=0;j<w;j++)
            {
                cin>>x[j];
                if(flag!=1) {
                    if (x[j] >= n) {
                        flag = 1;
                        sum = sum + (n * a[i]);
                    }
                }
            }
            if(flag!=1)
                sum=b+1;
            s[k] = sum;
            k++;

        }
        sort(s,s+k);
        if(s[0]<=b)
        cout<<s[0]<<endl;
        else
            cout<<"stay home"<<endl;
    }
    return 0;
}