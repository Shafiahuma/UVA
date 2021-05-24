#include <bits/stdc++.h>
#define ll long long int
#define max 1000005
using namespace std;
bool prime[max+1];
vector <int> primes;
#define M 1000000

void sieve() {
    memset(prime,false,sizeof(prime));
    prime[0]=true;
    prime[1]=true;
    for (ll i = 2; i * i <= max; i++) {
        if (!prime[i]) { // i is a prime
            for (ll j = i * i; j <= max; j += i) {
                prime[j] = true;
            }
        }
    }
    prime[2]=false;
}
int main()
{
    sieve();
    ll n,j,count=0;
    while(cin>>n) {
        if (n == 0)
            break;
        count=0;
        ll flag = 1;
        for (ll i = 2; i <= n/2; i++) {
            if (!prime[i] && !prime[n - i]) {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}