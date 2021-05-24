#include <bits/stdc++.h>
#define mx 200000
using namespace std;
int A[mx], B[mx];

int main(int argc, char *argv[]) {
    int startTime, endTime, totalTime;
    int i, j, s, m, key, k, t1, t2, tf;
    for (k = 1; k <= mx; k++) {
        A[k] = rand();
        B[k] = A[k];
    }
    startTime = time(NULL);
    for (j = 2; j < mx; j++) {
        key = A[j];
        i = j - 1;
        while ((i > 0) && (A[i] > key)) {
            A[i + 1] = A[i];
            i = i - 1;
        }
        A[i + 1] = key;
    }
    endTime = time(NULL);
    totalTime = endTime - startTime;
    cout << "Runtime of insertion sort : " << totalTime << " seconds."<<endl;
    startTime = time(NULL);
    for (i = 1; i < mx; i++) {
        for (j = 1; j < mx - i; j++) {
            if (B[j] > B[j + 1])
                swap(B[j], B[j + 1]);
        }
    }
    endTime = time(NULL);
    totalTime = endTime - startTime;
    cout << "Runtime of bubble sort : " << totalTime << " seconds.";

}