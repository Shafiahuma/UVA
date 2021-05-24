#include <bits/stdc++.h>

#define ll long long int
#define pi acos(-1)
#define cos(a) cos(a*pi/180)
using namespace std;

int main() {
    string s;
    ll n, i;
    while (cin >> s) {
        ll sum = 0, sum1 = 0;
        n = s.size();
        if (n == 1 && s[0] == '0')
            break;
        else {
            for (i = 0; i < n; i++) {
                if (i % 2 == 0)
                    sum += (s[i] - 48);
                else
                    sum1 += (s[i] - 48);
            }
        }
        if (abs(sum - sum1) == 0 || (abs(sum - sum1)) % 11 == 0)
            cout << s << " is a multiple of 11." << endl;
        else
            cout << s << " is not a multiple of 11." << endl;
    }
    return 0;
}