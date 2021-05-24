#include <bits/stdc++.h>

#define ll long long int
using namespace std;
int vis[105][105];
int x[9] = {-1, 0, 0, 1};
int y[9] = {0, -1, 1, 0};
char s[105][105];
int n, m;
void dd(int i, int j) {
    vis[i][j] = 1;
    for (int k = 0; k < 8; k++) {
        if ((i + x[k] >= 1) && (j + y[k] >= 1) && i + x[k] <= m && j + y[k] <= n) {
            if (s[i + x[k]][j + y[k]] == '@' && vis[i + x[k]][j + y[k]] == 0) {
                dd((i + x[k]), (j + y[k]));
            }
        }
    }

}

int main() {
    ll n, m, i, j;
    char ch;
    while (cin >> n >> m) {
        cin >> ch;
        char s[n + 5][m + 5];
        ll xx, yy;
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                cin >> s[i][j];
                if (s[i][j] == 'p') {
                    xx = i;
                    yy = j;
                }
            }
        }
        ll draft[n + m];
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                cin >> s[i][j];
                if (s[i][j] == 'p') {
                    xx = i;
                    yy = j;
                }
            }
        }
    }
    return 0;
}
