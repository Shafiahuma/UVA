#include <iostream>
using namespace std;
int main() {
    int t,n,p,q,a,i,j,temp;
    cin >> t;
    for (i = 1; i <= t; i++) {
        q = 0;
        p = 0;
        temp = 0;
        cin >> n;
        if (n > 1) {
            for (j = 1; j <= n; j++) {
                cin >> a;
                if (a > temp)
                    p++;
                else if (a == temp)
                    continue;
                else
                    q++;
                temp = a;
            }
            cout << "Case "<< i <<":"<<" "<<p-1 <<" "<< q << endl;
        } else
            cout << "Case "<< i <<":"<<" "<<"0 0" << endl;
    }
    return 0;
}