#include <bits/stdc++.h>
#define ll long long int
#define max 1000
bool isprime[max+1];
using namespace std;
vector <int> primes;
ll anag[max+1];
bool next(ll n)
{
    vector <int> v;
    ll x;
    while(n!=0)
    {
        x=n%10;
        if(x%2==0)
            return false;
        v.push_back(x);
        n=n/10;
    }
    sort(v.begin(),v.end());
    do{
        x=0;
        for(ll j=0;j<v.size();j++)
        {
            if(j==0)
                x=x+v[j];
            else {
                x = x * 10;
                x=x+v[j];
            }
        }
        if(!isprime[x])
            return false;
    }while(next_permutation(v.begin(),v.end()));
    return true;
}
void sieve()
{
    int k=0;
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
    isprime[2]=true;
    for(ll i=3;i<max;i=i+2)
    {
        if (isprime[i])
        {
            if(next(i)) {
                anag[k] = i;
                k++;
            }
        }
    }
    //for(ll i=0;i<primes.size();i++)
    //     cout<<primes[i];
}
int main()
{
    sieve();
    ll l,r,t,j,n,i;
    while(cin >> n) {
        int flag=1;
        if (n == 0) {
            flag=3;
            break;
        }
        else if(n==1) {
            cout << "2" << endl;
            flag = 3;
        }
        else if (n >= 991) {
            flag=3;
            cout << "0" << endl;
        }
        else {
            int count=0;
            //cout<<count<<endl;
            int temp=n;
            //n++;
            while(n!=0)
            {
                n=n/10;
                count++;
            }
            //cout<<count<<endl;
            count=pow(10,count);
            //cout<<count<<endl;
            for(i=0;anag[i]<count;i++)
            {
               // cout<<anag[i]<<endl;
                if(anag[i]>temp) {
                    cout << anag[i] << endl;
                    flag = 0;
                    break;
                }
            }
        }
        if(flag==1)
            cout<<"0"<<endl;
    }
    return 0;
}