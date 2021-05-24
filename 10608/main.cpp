#include <bits/stdc++.h>

#define ll long long int
#define pi acos(0)
using namespace std;
vector<int>g[30005];
bool visit[30005];
ll cc=0,mx=0;
void dfs(ll u)
{
    visit[u]= true;
    ll i;
    for(i=0;i<g[u].size();i++)
    {
        ll v=g[u][i];
        if(visit[v]==0) {
            dfs(v);
            cc++;
        }
    }
}
int main() {
    ll m, n, i, j, t, k=0, u, v,tt;
    cin>>tt;
    for(k=0;k<tt;k++){
        cin >> n >> m;
        for(i=0;i<=n;i++)
            g[i].clear();
        cc=0;
        mx=0;
        memset(visit,0,sizeof(visit));
        cc = 0;
        for (j = 1; j <= m; j++) {
            cin >> u >> v;
            // cout<<u<<v<<endl;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        for (i = 1; i <= n; i++) {
            cc=0;
            if (visit[i] == 0) {
                cc++;
                dfs(i);
            }
            mx=max(mx,cc);
        }
        cout <<mx<<endl;
    }
    return 0;
}