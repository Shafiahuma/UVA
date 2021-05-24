#include <bits/stdc++.h>

#define ll long long int
#define pi acos(0)
using namespace std;
vector<ll> g[1000];
bool visit[10000];

void dfs(ll u) {
    visit[u] = true;
    ll i;
    for (i = 0; i < g[u].size(); i++) {
        ll v = g[u][i];
        if (visit[v] == 0)
            dfs(v);
    }
}

int main() {
    ll i, tt, pp;
    cin >> tt;
    char ch;
    for (pp = 0; pp < tt; pp++) {
        string s;
        cin>>s;
        getchar();
        ch=s[0];
       // cout<<ch<<endl;
        for (i = 0; i <= ch-'A'+1; i++)
            g[i].clear();
        ll cc = 0;
        memset(visit, 0, sizeof(visit));
        while (true) {
            if (!getline(cin, s) || s.empty()) break;
            else {
                //cout<<s<<endl;
                g[s[0] - 'A' + 1].push_back(s[1] - 'A' + 1);
                g[s[1] - 'A' + 1].push_back(s[0] - 'A' + 1);
            }
        }
        //cout<<s<<endl;
        for (i = 1; i <= ch-'A'+1; i++) {
            if (visit[i] == 0) {
                cc++;
                dfs(i);
            }
        }
        cout << cc << endl;
        if(pp<tt-1)
            cout<<endl;
    }
    return 0;
}