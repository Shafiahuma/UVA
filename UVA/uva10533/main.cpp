#include <stdio.h>
#include <math.h>
int main(){
    int M,prime[100];
    for(int i = 2; i <= sqrt(M); i++)
        if (prime[i] == 0)
            for (int j = i + i; j <= M; j += i)
                prime[j] = 1;
    int t1, t2, t;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&t1,&t2);
        int cnt = 0;
        for(int i = t1; i <=t2; i++){
            if(prime[i] == 0){
                int sum = 0, j = i, temp;
                while(j > 0){
                    temp = i%10;
                    sum += temp;
                    j /= 10;
                }
                if(sum > 0 && prime[sum] == 0)cnt++;
            }
        }
        printf("%d",cnt);
    }
    return 0;
}
