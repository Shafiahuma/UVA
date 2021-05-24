#include <bits/stdc++.h>

#define ll long long int
using namespace std;

int main() {
    ll w, n, sum, k;
    while (cin >> k >> n) {
        stack<ll> st;
        ll ww[n + 5], vv[n + 5], pp[n + 5][k + 5], track[10000];
        ww[0] = 0;
        vv[0] = 0;
        for (ll i = 1; i <= n; i++) {
            cin >> ww[i];
            vv[i] = ww[i];
        }
        for (ll i = 0; i <= n; i++) {
            pp[i][0] = 0;
        }
        for (w = 0; w <= k; w++) {
            pp[0][w] = 0;
        }
        for (ll i = 1; i <= n; i++) {
            for (w = 1; w <= k; w++) {
                if (ww[i] > w) {
                    pp[i][w] = pp[i - 1][w];
                } else {
                    if (pp[i - 1][w] >= pp[i - 1][w - ww[i]] + vv[i]) {
                        pp[i][w] = pp[i - 1][w];
                    } else {

                        pp[i][w] = pp[i - 1][w - ww[i]] + vv[i];

                        track[pp[i][w]] = i;

                    }

                }

            }
        }
        ll i = pp[n][k];
        ll j = track[i];
        while (j != 0) {
            st.push(vv[j]);
            i = i - vv[j];
            j = track[i];
        }
        while (!st.empty()) {
            cout << st.top() << " ";
            st.pop();
        }
        cout<<"sum:" << pp[n][k]<<endl;
    }
    return 0;
}
