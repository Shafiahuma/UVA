#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, i, j;
    int x[9] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int y[9] = {-1, 0, 1, -1, 1, -1, 0, 1};
    char ch;
    int p = 1;
    while (cin >> n >> m) {
        if (n == 0 && m == 0)
            break;
        if (p > 1)
            cout << endl;
        cout << "Field #" << p << ":" << endl;
        char s[n + 55][m + 55];
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= m; j++) {
                cin >> s[i][j];
                //cout << s[i] << endl;
            }
        }
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= m; j++) {
                ch = s[i][j];
                if (ch != '*') {
                    int cc = 0;
                    for (int k = 0; k < 8; k++) {
                        if (i + x[k] >= 1 && j + y[k] >= 1 && i + x[k] <= n && j + y[k] <= m) {
                            if (s[i + x[k]][j + y[k]] == '*')
                                cc++;
                        }
                    }
                    s[i][j] = cc + '0';
                }
                cout << s[i][j];
            }
            cout << endl;

        }
        p++;
    }
    return 0;
}
