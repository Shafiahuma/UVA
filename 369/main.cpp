#include<bits/stdc++.h>

#define ll long long int
#define dd double
using namespace std;

dd fact(dd n) {
    if (n == 0)
        return 1;
    else
        return (n * fact(n - 1));
}

int main() {
    dd a, b, c;
    while (cin >> a >> b) {
        if (a == 0 && b == 0)
            break;
        ll temp;
        // cout<<fact(a)<<" "<<fact(a-b)<<" "<<fact(b)<<endl;
        c = round(fact(a) / (fact(b) * fact(a - b)));
        temp = floor(c);
        if (c - (dd) temp >= .5)
            temp++;
        cout << a << " things taken " << b << " at a time is " << temp << " exactly." << endl;
    }
    return 0;
}