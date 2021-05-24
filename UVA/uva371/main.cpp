#include <stdio.h>
int main()
{
    int a,b,i,max,count,j,ans;
    while(1) {
        scanf("%d %d", &a, &b);
        i = 1;
        max = 0;
        if (a == 0 && b == 0)
            break;
        while (i <= 2) {
            for (j = a; j <= b; j++) {
                count = 0;
                while (j != 1) {
                    if (j % 2 == 0)
                        j = j / 2;
                    else
                        j = 3 * j + 1;
                    count++;
                }
                if (max < count) {
                    max = count;
                    ans = j;
                }
                printf("Between %d and %d, %d generates the longest sequence of %d values\n", a, b, ans, max);
                i++;
            }
        }
    }
        return 0;
}