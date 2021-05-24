#include <bits/stdc++.h>
using namespace std;
int bubbleSort(int arr[], int n)
{
    int i, j,count=0;
    bool swapped;
    for (i = 0; i < n-1; i++)
    {
        swapped = false;
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
                count++;
            }
        }
        if (!swapped) {
            return count;
            break;
        }
    }
}
int main() {
    int n,i,temp;
    cin>>n;
    int a[n+1];
    for(i=1;i<=n;i++)
    {
        a[i-1]=i;
    }
    temp=bubbleSort(a,n);
    cout<<temp<<endl;
    cout<<temp/n<<endl;
    return 0;
}