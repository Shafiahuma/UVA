#include <bits/stdc++.h>

#define ll long long int
using namespace std;

int main() {
    string s, s1, s2;
    ll i, j;
    ll a[1000000];
    reverse(s.begin(), s.end());
    reverse(s1.begin(), s1.end());
    while (cin >> s >> s1) {
        for (i = 0; i < s.length(); i++) {
            for (j = 0; j < s1.length(); j++) {
                a[i + j] += ((s[i] - '0') * (s1[j] - '0'));
            }
        }
        for (i = 0; i <; i++) {
            //cout<<a[i]<<" ";
            s2 += ((a[i] % 10) + '0');
            a[i + 1] += a[i] / 10;
        }
        // cout<<endl;
        cout << s2 << endl;
        s2.clear();
        memset(a, 0, sizeof(a));
    }
}
