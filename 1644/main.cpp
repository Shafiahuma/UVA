#include <bits/stdc++.h>

#define max 1300000
#define ll long long int
using namespace std;
vector<ll> primes;

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
    ll t,i;
    while(cin>>t)
    {
        if(t==0)
            break;
        else
        {
            i=0;
           while(primes[i]<t)
           {
               i++;
           }
           if(primes[i]==t)
               cout<<"0"<<endl;
           else
               cout<<primes[i]-primes[i-1]<<endl;
        }
    }
    return 0;
}