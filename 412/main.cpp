#include <bits/stdc++.h>
#define pi 3.162
#define aaa 100000
#define ll long long int
using namespace std;

int main() {
    ll n,i,j;
    while(cin>>n)
    {
        ll a[n+55];
        if(n==0)
            break;
        for(i=0;i<n;i++)
            cin>>a[i];
        ll cc=0,cc1=0;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(__gcd(a[i],a[j])==1)
                    cc++;
                cc1++;
            }
        }
        if(cc)
        {
            double temp=(double)cc1*6.0;
            double temp1=sqrt(temp/(double)cc);
            cout<<fixed<<setprecision(6)<<temp1<<endl;
        }
        else
            cout<<"No estimate for this data set."<<endl;
    }
}

