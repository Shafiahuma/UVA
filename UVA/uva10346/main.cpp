#include<iostream>
using namespace std;
int main() {
    long long int n, k, sum;
    while (scanf("%lld %lld", &n, &k) == 2) {
        sum = n;
        while (n >= k) {
            sum = sum + (n / k);
            n = (n / k) + (n % k);
        }
        printf("%lld\n", sum);
    }
    return 0;
}