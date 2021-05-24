//Nqueen
#include<stdio.h>
#include<math.h>
int Place(int ,int);
void NQueen(int, int);
int X[100];

int main()
{
    int j,n;

    printf("Please Enter How Many Queen do you want to place?  ");
    scanf("%d",&n);
    NQueen(1,n);
    return 0;
}
void NQueen(int k, int n)
{
    int i,l;
    for(i=1; i<=n; i++)
    {
        if(Place(k,i))
        {
            X[k]=i;
            if(k==n)
            {
                for(l=1; l<=n; l++)
                    printf(" %d ",X[l]);
                printf("\n");
            }
            else
                NQueen(k+1,n);
        }
    }
}
int Place(int k,int i)
{
    int j;
    for(j=1; j<=k-1; j++)
        if((X[j]==i)||((abs(X[j]-i)==abs(j-k))))
            return 0;
    return 1;
}