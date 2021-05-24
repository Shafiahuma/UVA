#include <bits/stdc++.h>
#define ll long long int
#define max 20000005
using namespace std;
bool prime[max+1];
ll twin[max+1];
vector <int> primes;
#define M 1000000

void sieve() {
    ll k=0;
    memset(prime, false, sizeof(prime));
    prime[0] = true;
    prime[1] = true;
    for (ll i = 2; i * i <= max; i++) {
        if (!prime[i]) { // i is a prime
            for (ll j = i * i; j <= max; j += i) {
                prime[j] = true;
            }
        }
    }
    prime[2] = false;
    for(ll i=2;i<max;i++)
    {
       // cout<<i<<endl;
        if(!prime[i])
        {
            if(!prime[i-2]) {
                twin[k] = i-2;
                k++;
            }
        }
    }
}
int main()
{
    sieve();
    ll n;
    while(cin >> n){
        cout<<"("<<twin[n-1]<<", "<<twin[n-1]+2<<")"<<endl;
    }
    return 0;
}