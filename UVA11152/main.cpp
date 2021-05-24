#include <stdio.h>
int main() {
    int a,b,c;
    double p =3.142857143, y1, y4, y3, temp, y2, y;
    while((scanf("%d %d %d", &a, &b, &c))!=EOF) {
        if ((0 < a) && (a <= b) && (b <= c)) {
            temp = (double) c / 2;
            y1 = .5 * a * b;
            y = (p * temp * temp) - y1;
            y2 = (y1 * 2) / (a + b + c);
            y4 = y2 * p * y2;
            y3 = y1 - y4;
            printf("%.4lf %.4lf %.4lf\n", y, y3, y4);
        }
    }
        return 0;
}