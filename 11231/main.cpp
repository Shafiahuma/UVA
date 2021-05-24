#include <bits/stdc++.h>

#define ll long long int
using namespace std;

int main() {
    ll n, m, c, temp;
    while (cin >> n >> m >> c) {
        if (n == 0 && m == 0 && c == 0)
            break;
        temp = ((n - 7) * (m - 7));
        if (c) {
            temp += (temp % 2);
        }
        cout << temp / 2 << endl;
    }
    return 0;
}
