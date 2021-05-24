#include <bits/stdc++.h>

#define max 100007
#define ll long long int
using namespace std;
vector<ll> primes;
vector <ll> a;

void sieve() {
    bool isprime[max + 1];
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
    primes.push_back(2);
    for (ll i = 3; i < max; i = i + 2) {
        if (isprime[i])
            primes.push_back(i);
    }
}

int main() {
    sieve();
    ll i,b,cc = 0,x;
    cin >> b;
    //memset(a,0,sizeof(a));
    for (i = 0; primes[i]<= b; i++) {
        if(b==0)
            break;
        x=b/primes[i];
        //cout<<x<<" ";
        b-=(x*primes[i]);
        if(b==1)
        {
            b+=primes[i];
            x--;
        }
        //cout<<b<<endl;
        while(x)
        {
            a.push_back(primes[i]);
            x--;
        }
    }
    cout<<a.size()<<endl;
    for(i=0;i<a.size();i++)
        cout<<a[i]<<" ";
}