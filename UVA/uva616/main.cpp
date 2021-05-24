#include <stdio.h>
#include <math.h>
int main() {
    int total, count, i, k = 0, p[1000], t2[1000], l, m, sum, n[10000];
    while (1) {
        scanf("%d",&total);
        if (total < 0)
            break;
        sum = 0;
        l = 0;
        m = 0;
        for (i = 1; i < sqrt(total); i++) {
            if (total % i == 1) {
                n[k] = total;
                while (total > 0) {
                    total = total - (total / i) - 1;
                    sum = sum + total;
                    t2[l] = n[k] - sum;
                    p[m] = i;
                    m++;
                    l++;
                }
            }
        }
        if (m > 0) {
            if (t2[l] % p[m] == 0) {
                printf("%d coconuts, %d people and 1 monkey", n[k], p[m]);
                m++;
            } else
                printf("%d coconuts, no solution\n", n[k]);
            k++;
        }
    }
    return 0;
}