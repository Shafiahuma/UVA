#include <bits/stdc++.h>

using namespace std;
int vis[105][105];
int x[9] = {-1, 0, 0, 1};
int y[9] = {0, -1, 1, 0};
char s[105][105];
int n, m;
int ss[30], ll;
vector<char> alp;
vector<pair<int, char> > vect;
set<char> sss;

void dd(int i, int j) {
    vis[i][j] = 1;
    for (int k = 0; k < 8; k++) {
        if ((i + x[k] >= 1) && (j + y[k] >= 1) && i + x[k] <= m && j + y[k] <= n) {
            if (s[i + x[k]][j + y[k]] == alp[ll] && vis[i + x[k]][j + y[k]] == 0) {
                dd((i + x[k]), (j + y[k]));
            }
        }
    }

}

int main() {
    int i, j, tt, pp;
    char ch;
    cin >> tt;
    for (pp = 0; pp < tt; pp++) {
        cin >> m >> n;
        memset(ss, 0, sizeof(ss));
        cout << "World #" << pp + 1 << endl;
        for (i = 1; i <= m; i++) {
            for (j = 1; j <= n; j++) {
                cin >> s[i][j];
                if (ss[s[i][j] - 'a'] == 0) {
                    alp.push_back(s[i][j]);
                    ss[s[i][j] - 'a'] = 1;
                }
                //cout << s[i] << endl;
            }
        }
        int cc = 0;
        for (ll = 0; ll < alp.size(); ll++) {
            memset(vis, 0, sizeof(vis));
            cc = 0;
            for (i = 1; i <= m; i++) {
                for (j = 1; j <= n; j++) {
                    ch = s[i][j];
                    if (ch == alp[ll] && vis[i][j] == 0) {
                        cc++;
                        dd(i, j);
                    }
                }
            }
            vect.emplace_back(cc, alp[ll]);
        }
        sort(vect.begin(), vect.end());
        for (i = (vect.size() - 1); i >= 0; i--) {
            int ttt = vect[i].first;
            for (; i >= 0; i--) {
                if (vect[i].first == ttt)
                    sss.insert(vect[i].second);
                else
                {
                    i++;
                    break;
                }
            }
            set<char>::iterator it;
            for (it = sss.begin(); it != sss.end(); it++) {
                cout << *it << ": " << ttt << endl;
            }
            sss.clear();
        }
        alp.clear();
        vect.clear();
    }
    return 0;
}
