#include <stdio.h>
int main() {
    int c,n,j,a[1001],count,i,sum;
    float avg,ans;
    scanf("%d",&c);
    for(j=0;j<c;j++) {
        scanf("%d",&n);
        count=0;sum=0;
        for (i = 0; i < n; i++) {
            scanf("%d",&a[i]);
            sum = sum + a[i];
        }
        avg = (float)(sum/(n*(.1)));
        for (i = 0; i < n; i++) {
            if (((float) a[i]) > avg)
                count++;
        }
        ans=(float)(count/(n*(.1)))*100;
        printf("%.2f",ans);
    }
    return 0;
}