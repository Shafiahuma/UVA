#include <bits/stdc++.h>
#define ll long long int
#define max 6
bool prime[max+1];
bool twin[max+1];
using namespace std;
vector <int> v;
void sieve() {
    ll k=0;
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
    for(ll i=2;i<=max;i++)
    {
        if(!prime[i])
            v.push_back(i);
    }
    for(ll i=0;i<v.size();i++)
    {
        if(v[i+1]-v[i]==2)
            twin[k]=v[i];
    }
}
int main() {
    sieve();
   ll n;
   cin>>n;
   cout<<twin[n-1]<<endl;
    return 0;
}
