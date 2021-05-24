#include <bits/stdc++.h>

#define mx 1000000000000
#define max 100000007
#define ll long long int
using namespace std;
vector<ll> primes;
vector<ll> primes1;
bool isprime[max + 1];

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
    primes.push_back(2);
    for (ll i = 3; i < max; i = i + 2) {
        if (isprime[i])
            primes.push_back(i);
    }
}
ll f(ll n) {
    ll i;
    for (i = 0; primes[i] * primes[i] <= n; i++) {
        if (n % primes[i] == 0) {
            //cout<<primes[i]<<endl;
            return 0;
        }
    }
    return 1;
}

int main() {
    sieve();
    ll n, i, k;
    set<ll>s;
    cin >> n >> k;
    //cout<<n<<k<<endl;
    if (n > max) {
        cout<<"me"<<endl;
        for (i = n; i > max; i--) {
            //cout<<i<<endl;
            if (f(i)) {
                s.insert(i);
            }
        }
    }
    for (i = 0; primes[i] <= n; i++) {
        s.insert(primes[i]);
        //cout << primes[i] << endl;
    }
    set<ll>::reverse_iterator it;
    ll cc = 0;
    for (it = s.rbegin(); it != s.rend(); it++) {
        if (cc < k) {
            cout << *it << " ";
            cc++;
        } else
            break;
    }
    s.clear();
}