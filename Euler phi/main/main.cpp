#include <bits/stdc++.h>
#define ll long long int
#define mx 10000
int a[mx+1];
using namespace std;
vector <ll>pr;
void sieve()
{
    int i,j;
    pr.push_back(2);
    for(i=3;i<mx;i++)
    {
        if(a[i]==0)
        {
            pr.push_back(i);
            for(j=i*i;j<mx;j=j+i)
            {
                a[j]=1;
            }
        }
    }
}
int main() {
    sieve();
        int i, n, k, phi;
        cin >> n;
        phi = n;
        for (i = 0; pr[i] * pr[i] < n; i++) {
            k = pr[i];
            if (n % k == 0) {
                while (n % k == 0)
                    n = n / k;
                phi = phi * (k - 1);
                phi = phi / k;
            }
        }
        if (n > 1) {
            phi = phi * (n - 1);
            phi = phi / n;
        }
        cout << phi << endl;
    return 0;
}
