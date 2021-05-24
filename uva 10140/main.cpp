#include <bits/stdc++.h>
#define ll long long int
#define max 1000005
using namespace std;
vector <int> primes;
vector <int> dis;
void sieve()
{
    bool isprime[max+1];
    for(ll i=0;i<=max;i++) {
        isprime[i] = true;
    }
    isprime[0]=false;
    isprime[1]=false;
    for(ll i=3;i*i<=(max);i=i+2)
    {
        if(isprime[i]) {
            for (ll j = i*i; j  <= max; j=j+i) {
                isprime[j] = false;
            }
        }
    }
    primes.push_back(2);
    for(ll i=3;i<max;i=i+2)
    {
        if(isprime[i])
            primes.push_back(i);
    }
    //for(ll i=0;i<primes.size();i++)
    //     cout<<primes[i];
}
void ss (ll l, ll r) {
    bool isPrime[r-l+1];
    for (ll i = 0; i < r - l + 1; ++i)
        isPrime[i] = true;
    if (l == 1)
        isPrime[0] = false;
    for (ll i = 0; primes[i]*primes[i] <= r; ++i) {
        int cp = primes[i];
        ll temp = (l/cp)*cp;
        if (temp < l)
            temp=temp+cp;
        for (ll j = temp; j <= r; j =j+cp) {
            isPrime[j-l] = false;
        }
        if (temp == cp)
            isPrime[temp-l] = true;
    }
    for (ll i = 0; i < r - l + 1; ++i) {
        if (isPrime[i])
            dis.push_back(l+i);
    }
}

int main()
{
    sieve();
    ll l,r,t,j,i;
      while(cin >> l >> r){
        ss(l,r);
        ll mx=0,a,b,a1,b1;
        ll mn=100000,temp;
        for(i=0;i<dis.size()-1;i++)
        {
            temp=abs(dis[i]-dis[i+1]);
            if(temp<mn)
            {
                mn=temp;
                a=dis[i];
                b=dis[i+1];
            }
            if(temp>mx)
            {
                mx=temp;
                a1=dis[i];
                b1=dis[i+1];
            }
        }
       if(a!=b && a1!=b1)
           cout<<a<<","<<b<<" are closest, "<<a1<<","<<b1<<" are most distant."<<endl;
       else
           cout<<"There are no adjacent primes."<<endl;
    }
    return 0;
}