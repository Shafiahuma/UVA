#include <bits/stdc++.h>

#define ll long long int
using namespace std;

int main() {
    ll n;
    vector<ll> a;
    while(cin>>n)
    {
        a.push_back(n);
        sort(a.begin(),a.end());
        ll m,j;
        j=a.size();
        if(j%2==1)
        {
            m=j/2;
            // cout<<m<<endl;
            cout<<a[m]<<endl;
        }
        else
        {
            m=(a[(j/2)]+a[(j/2)-1])/2;
            cout<<m<<endl;
        }
    }
    return 0;
}