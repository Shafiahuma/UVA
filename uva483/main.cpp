#include <bits/stdc++.h>
using namespace std;
int main() {
    string s,s1;
    while(getline(cin,s)) {
        int i, n, k = 0;
        n = s.length();
        s1="";
        for (i = 0; i < n; i++) {
            if (s[i] == ' ') {
                reverse(s1.begin(), s1.end());
                cout << s1 << " ";
                s1 = "";
            } else {
                s1 += s[i];
                if(i==n-1)
                {
                    reverse(s1.begin(), s1.end());
                    cout<<s1;
                    s1 = "";
                }
            }
        }
            cout << endl;
    }
    return 0;
}
