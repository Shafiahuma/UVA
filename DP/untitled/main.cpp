#include <bits/stdc++.h>

#define mod 1000000007
#define ll long long int
using namespace std;

int main() {
    ll t, i, j, n, a, b, c, d, e, f, tt, x, r;
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> n;
        string s;
        cin >> s;
        ll cc = 0;
        c = 0;
        ll fail = 0;
        vector<ll> pp;
        for (j = 0; j < n; j++) {
            if (s[j] == 'T')
                cc++;
            else {
                c++;
                pp.push_back(j);
            }
        }
        vector<ll> v;
        ll temp = 0;
        if (cc == 2 * c) {
            cc = 0;
            for (j = 0; j < n; j++) {
                if (s[j] == 'T')
                    cc++;
                else
                    cc--;
                if (cc < 0) {
                    fail = 1;
                    break;
                }
            }
            for (j = n - 1; j >= 0; j--) {
                if (s[j] == 'T')
                    cc++;
                else
                    cc--;
                if (cc < 0) {
                    fail = 1;
                    break;
                }
            }
        } else
            fail = 1;
        if (fail)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}