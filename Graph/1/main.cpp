#include <bits/stdc++.h>

#define ll long long int
using namespace std;
int n, m;
vector<int> vis;

void printgraph(vector<int> aa1[], int ss) {
    cout << "the graph is:" << endl;
    for (int i = 1; i <= ss; i++) {
        cout <<i<<"->";
        for (int j = 0; j < aa1[i].size(); j++) {
            cout << aa1[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int a, b;
    cin >> n >> m;
    vector<int> aa[n+55];
    for (int j = 1; j <= m; j++) {
        cin >> a >> b;
        aa[a].push_back(b);
        aa[b].push_back(a);
    }
    printgraph(aa, n);
    return 0;
}
