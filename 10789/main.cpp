#include <bits/stdc++.h>

#define ll long long int
#define pi acos(-1)
#define cos(a) cos(a*pi/180)
using namespace std;
bool isprime(ll n)
{
    ll i;
    if(n==1)
        return false;
    else if(n==2)
        return true;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main() {
    ll t,i,j,n;
    string s;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>s;
        n=s.size();
        ll a[1555];
        set <char> c;
        memset(a,0,sizeof (a));
        for(i=0;i<n;i++)
        {
            a[s[i]]++;
            c.insert(s[i]);
        }
        set <char> :: iterator it;
        ll f=1;
        for(it=c.begin();it!=c.end();it++)
        {
            if(isprime(a[*it])) {
                if(f==1)
                    cout<<"Case "<<j+1<<": ";
                cout << *it;
                f++;
            }
        }
        if(f==1)
            cout<<"Case "<<j+1<<": empty";
        cout<<endl;
    }
}