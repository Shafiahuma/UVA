#include <bits/stdc++.h>

#define ll long long int
#define pi acos(0)
using namespace std;
vector<ll>g[1000];
bool visit[10000];
void dfs(ll u)
{
    visit[u]= true;
    ll i;
    for(i=0;i<g[u].size();i++)
    {
        ll v=g[u][i];
        if(visit[v]==0)
            dfs(v);
    }
}
int main() {
    ll m, n, i, j, t, k, u, v;
    while (cin >> m >> n) {
        // cout<<n<<m<<endl;
        ll cc = 0;
        if (n == 0 && m == 0)
            break;
        for (j = 1; j <= n; j++) {
            cin >> u >> v;
            // cout<<u<<v<<endl;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        for (i = 1; i <= m; i++) {
            if (visit[i] == 0) {
                cc++;
                dfs(i);
            }
        }
        cout <<"Case "<<i<<": "<<cc<<endl;
        for(i=0;i<=n;i++)
            g[i].clear();
        cc=0;
        memset(visit,0,sizeof(visit));
    }
    return 0;
}