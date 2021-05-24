#include <bits/stdc++.h>
#define ll long long int
#define max 10000005
using namespace std;
bool isprime[max];
ll primes[max+1];
void sieve() {
    for (ll i = 0; i <= max; i++) {
        isprime[i] = true;
    }
    isprime[0] = false;
    isprime[1] = false;
    for (ll i = 3; i * i <= (max); i = i + 2) {
        if (isprime[i]) {
            for (ll j = i * i; j <= max; j = j + i) {
                isprime[j] = false;
            }
        }
    }
    primes[0]=2;
    ll k=1;
    for (ll i = 3; i < max; i = i + 2) {
        if (isprime[i])
        {
            primes[k]=i;
            k++;
        }
    }
}
int main() {
    sieve();
    ll n,t,k;
    cin>>t;
    for(k=0;k<t;k++)
    {
    scanf("%lld",&n);
        if(n==0)
            break;
        double sum1=1,sum,temp;
        temp=(double)n;
        for (ll i = 0; primes[i] * primes[i] <= n;i++){
            ll f=0,x=0;
            while(n%primes[i]==0)
            {
                f=1;
                x++;
                n=n/primes[i];
            }
            if(f==1)
            {
                sum=1;
                while(x>0)
                {
                    sum=sum+(pow(primes[i],x));
                            x--;
                }
            }
           // cout<<sum<<endl;
            sum1=sum1*sum;
        }
        if(n>1)
        {
           sum=(double)n+1;
        }
        sum1=sum1*sum;
        cout<<sum1-temp<<endl;
    }
    return 0;
}