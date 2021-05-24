#include <iostream>
using namespace std;
int main() {
    int n,sum,i;
    while ((scanf("%d", &n)) == 1)
    {
        sum=0;
        for(i=1;i<=n/2;i++)
        {
            if(n%i==0)
                sum=sum+i;
        }
    }
    return 0;
}