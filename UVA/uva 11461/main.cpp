#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    double a,b;
    while(scanf("%lf %lf",&a,&b)==2) {
        ll count = 0, p;
        if (a == 0 && b == 0)
            break;
        ll temp = (int)sqrt(b);
        ll temp1 = (int)sqrt(a);
        if (temp1 * temp1 != (int)a && temp * temp != (int)b)
            p = (int)sqrt(b) - (int)sqrt(a);
        else {
            if (temp1 * temp1 == (int)a && temp * temp == (int)b)
                count = 1;
            else if (temp1 * temp1 == (int)a && temp * temp != (int)b)
                count = 1;
            else if (temp1 * temp1 != (int)a && temp * temp == (int)b)
                count = 0;
            p =(temp - temp1) + count;
        }
        cout << p << endl;
    }
    return 0;
}