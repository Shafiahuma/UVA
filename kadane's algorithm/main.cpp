#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int a[] = {1, -2, -1, 5, -1, 0, -1, 7};
    int n = sizeof(a) / sizeof(a[0]);

    int max_till_here = a[0], current_max = a[0];
    for (int i = 1; i < n; i++) {
        cout<<current_max<<" "<<max_till_here<<endl;
        current_max = max(a[i], current_max + a[i]);
        max_till_here = max(max_till_here, current_max);
    }
    cout << max_till_here << '\n';
    return 0;
}