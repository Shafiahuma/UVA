#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double n,tax;
    long long int t,i,temp;
    cin>>t;
    for(i=0;i<t;i++) {
        cin >> n;
        if(n<=180000)
            tax=0;
        else if (n > 180000 && n <= 480000)
            tax = ((n - 180000) * .1);
        else if (n > 480000 && n <= 880000)
            tax = ((n - 480000) * .15) + 30000;
        else if (n > 880000 && n <= 1180000)
            tax = ((n - 880000) * .2) + 90000;
        else if (n > 1180000)
            tax = ((n - 1180000) * .25) + 150000;
        if (tax > 0 && tax < 2000)
            tax = 2000;
        temp=ceil(tax);
            cout << "Case " << i + 1 << ":" << " " << temp << endl;
    }
    return 0;
}