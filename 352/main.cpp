#include <bits/stdc++.h>

using namespace std;
int vis[30][30];
int x[9] = {-1, -1, -1, 0, 0, 1, 1, 1};
int y[9] = {-1, 0, 1, -1, 1, -1, 0, 1};
char s[30][30];
int n;

void dd(int i, int j) {
    vis[i][j] = 1;
    for (int k = 0; k < 8; k++) {
        if ((i + x[k] >= 1) && (j + y[k] >= 1) && i + x[k] <= n && j + y[k] <= n) {
            if (s[i + x[k]][j + y[k]] == '1' && vis[i + x[k]][j + y[k]] == 0) {
                dd((i + x[k]), (j + y[k]));
            }
        }
    }

}

int main() {
    int i, j;
    char ch;
    int p = 1;
    while (cin >> n) {
        memset(vis, 0, sizeof(vis));
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                cin >> s[i][j];
                //cout << s[i] << endl;
            }
        }
        int cc = 0;
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                ch = s[i][j];
                if (ch == '1' && vis[i][j] == 0) {
                    cc++;
                    dd(i, j);
                }
            }
        }
        cout << "Image number " << p << " contains " << cc << " war eagles." <<
             endl;
        p++;
    }
    return 0;
}
