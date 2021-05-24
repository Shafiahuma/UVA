#include <bits/stdc++.h>

#define ll long long int
using namespace std;

int main() {
    ll t, i, n, j, cc = 0;
    string s, s1, s2;
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> s >> s1;
        ll p = 0, sum, carry = 0;
        while (p < s.size() && p < s1.size()) {
            // cout << ".." << p << endl;
            sum = carry + (s[p] - '0') + (s1[p] - '0');
            // cout << "sum with carry" << sum << endl;
            carry = sum / 10;
            //  cout << "carry" << carry << endl;
            sum = sum % 10;
            // cout << "sum" << sum << endl;
            if (s2.empty() && sum == 0)
                cc++;
            else
                s2.push_back(sum + '0');
            p++;
        }
        if (p < s.size()) {
            n = s.size();
            for (j = p; j < n; j++) {
                sum = carry + s[j] - '0';
                carry = sum / 10;
                sum = sum % 10;
                if (s2.empty() && sum == 0)
                    continue;
                else
                    s2.push_back(sum + '0');
            }
        } else {
            n = s1.size();
            for (j = p; j < n; j++) {
                sum = carry + s1[j] - '0';
                carry = sum / 10;
                sum = sum % 10;
                if (s2.empty() && sum == 0)
                    continue;
                else
                    s2.push_back(sum + '0');
            }
        }
        if (carry)
            s2.push_back(carry + '0');
        cout << s2 << endl;
        s1.clear();
        s.clear();
        s2.clear();
    }
    return 0;
}
