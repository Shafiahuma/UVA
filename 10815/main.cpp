#include <bits/stdc++.h>

#define ll long long int
using namespace std;

int main() {
    string s, s1;
    set<string> k;
    string v;
    while (cin >> s) {
        // if(s=="0")
        // break;
        ll i;
        for (i = 0; i < s.size(); i++) {
            if (isalpha(s[i])) {
                v.push_back(tolower(s[i]));
            } else {
                s.erase(s.begin() + i);
                i--;
                if (isalpha(s[i + 1])) {
                    if (!v.empty()) {
                        k.insert(v);
                        v.clear();
                    }
                }
            }
        }
        if (!v.empty()) {
            k.insert(v);
            v.clear();
        }
        s.clear();
    }
    set<string>::iterator it;
    for (it = k.begin(); it != k.end(); it++)
        cout << *it << endl;
    return 0;
}