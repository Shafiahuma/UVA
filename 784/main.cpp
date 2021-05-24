#include <bits/stdc++.h>

using namespace std;
int vis[105][105];
int x[9] = {-1, 0, 0, 1};
int y[9] = {0, -1, 1, 0};
string s[100];

void dd(int i, int j) {
    for (int k = 0; k < 4; k++) {
        if ((i + x[k] >= 0) && (j + y[k] >= 0) && i + x[k] <= s->size()&& j + y[k] <= s[i].size()) {
            if (s[i + x[k]][j + y[k]] == ' ' && vis[i + x[k]][j + y[k]] == 0) {
                dd((i + x[k]), (j + y[k]));
            }
        }
    }

}

int main() {
    string s[100];
    int p, i;
    cin >> p;
    for (i = 0; i < p; i++) {
        int j = 0;
        while (cin >> s[j]) {
            if (s[j][0] == '_')
                break;
            j++;
        }
        for (j = 0; j < s->size(); j++) {
            for (int k = 0; k < s[j].size(); k++) {
                if (s[j][k] == '*') {
                    dd(j, k);
                }
            }
        }
    }
    return 0;
}
