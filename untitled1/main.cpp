#include<bits/stdc++.h>

#define ll long long
using namespace std;

int main() {
    ll t, i, j, n, cnt, flg, m, x, y, k;
    cin >> t;
    while (t--) {
        cin >> x >> y >> k;
        vector<ll> v;
        n = x - k;
        m = y - k;
        for (i = 1; i * i <= n; i++) {
            ll temp = 0;
            if (n % i == 0 && m % i == 0) {
                if (i > k)
                    v.push_back(i);
                temp = n / i;
                if ((i!=temp && n % temp == 0 && m % temp == 0)
                    if (temp > k)
                        v.push_back(temp);
            }
            else if(n%i==0)
            {
                temp = n / i;
                if (n % temp == 0 && m % temp == 0)
                    if (temp > k)
                        v.push_back(temp);
            }
        }
        sort(v.begin(),v.end());
        cout << v.size() << endl;
        if(!v.empty()) {
            for (i = 0; i < v.size(); i++)
                cout << v[i] << " ";
            cout << endl;
        }
    }
}
