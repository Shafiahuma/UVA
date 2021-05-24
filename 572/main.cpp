#include <bits/stdc++.h>
//572
using namespace std;
int vis[105][105];
int x[9] = {-1, -1, -1, 0, 0, 1, 1, 1};
int y[9] = {-1, 0, 1, -1, 1, -1, 0, 1};
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
    int i, j;
    char ch;
    int p = 1;
    while (cin >> m >> n) {
        if (m == 0)
            break;
        memset(vis, 0, sizeof(vis));
        for (i = 1; i <= m; i++) {
            for (j = 1; j <= n; j++) {
                cin >> s[i][j];
                //cout << s[i] << endl;
            }
        }
        int cc = 0;
        for (i = 1; i <= m; i++) {
            for (j = 1; j <= n; j++) {
                ch = s[i][j];
                if (ch == '@' && vis[i][j] == 0) {
                    cc++;
                    dd(i, j);
                }
            }
        }
        cout << cc << endl;
        p++;
    }
    return 0;
}
