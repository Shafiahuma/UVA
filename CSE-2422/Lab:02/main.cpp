#include <bits/stdc++.h>
#define ll long long int
#define mx 200000
ll A[mx+1],b[mx+1];
using namespace std;
void mergesort(int l,int h);
void merge(int l,int m,int h);
int main() {
    int startTime, endTime, totalTime;
    int k;
    for (k = 1; k <= mx; k++) {
        A[k] = rand();
    }
    int l,h;
    l=1;
    h=mx;
    startTime = time(NULL);
    mergesort(l,h);
    endTime = time(NULL);
    totalTime = endTime - startTime;
    //cout<<startTime<<" "<<endTime<<endl;
    cout << "Runtime of Merge sort : " << totalTime << " seconds.";
}
void mergesort(int l,int h)
{
    int j,m;
    if(l<h)
    {
        m=floor((l+h)/2);
        mergesort(l,m);
        mergesort(m+1,h);
        merge(l,m,h);
    }
}
void merge(int l,int m,int h)
{
    int hh=l;
    int i=l;
    int j=m+1;
    int k;
    while(hh<=m && j<=h)
    {
        if(A[hh]<=A[j])
        {
            b[i]=A[hh];
            hh++;
        }
        else
        {
            b[i]=A[j];
            j++;
        }
        i++;
    }
    if(hh>m)
    {
        for(k=j;k<=h;k++)
        {
            b[i]=A[k];
            i++;
        }
    }
    else
    {
        for(k=hh;k<=m;k++) {
            b[i] = A[k];
            i++;
        }
    }
    for(k=l;k<=h;k++)
        A[k]=b[k];
}