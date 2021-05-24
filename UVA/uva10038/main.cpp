#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[3001],i,k,temp,n;
    while((scanf("%d",&n))==1)
    {
        temp=0;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        if(n==1) {
            cout << "Jolly" << endl;
            continue;
        }
        else{
            for (i = 1; i < n; i++) {
                k = abs(a[i - 1] - a[i]);
                if (k<1 || k>n-1 || k==temp) {
                    cout << "Not jolly" << endl;
                    break;
                }
                else{
                    if(i==n-1)
                        cout << "Jolly" << endl;
                }
                temp=k;
            }
        }
    }
    return 0;
}