#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll phi(ll n) {
    ll res = n;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n =n/i;
            res =res-( res / i);
        }
    }
    if (n > 1)
        res = res-( res/ n);
    return res;
}
int main() {
    ll n,t,i;
   cin>>t;
   for(i=0;i<t;i++)
   {
       cin>>n;
        if(n==0)
            break;
        cout << phi(n) << endl;
    }
    return 0;
}
