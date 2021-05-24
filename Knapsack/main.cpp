#include <bits/stdc++.h>

using namespace std;

int main() {
    int knapsack_weight, items, i, j, w, profit[1000][1000];
    int values[1000] = {0, 1, 3, 4};
    int track[1000];
    int weight[1000] = {0, 1, 3, 4};
    stack<int> st;
    scanf("%d %d", &knapsack_weight, &items);
    for (i = 0; i <= items; i++) {
        profit[i][0] = 0;//no weight is taken, so no profit so far
    }
    for (w = 0; w <= knapsack_weight; w++) {
        profit[0][w] = 0;//no item is taken, so no profit so far.
    }
    for (i = 1; i <= items; i++) {
        for (w = 1; w <= knapsack_weight; w++) {
            if (weight[i] > w) {
                profit[i][w] = profit[i - 1][w];
            } else {
                if (profit[i - 1][w] >= profit[i - 1][w - weight[i]] + values[i]) {
                    profit[i][w] = profit[i - 1][w];
                } else {

                    profit[i][w] = profit[i - 1][w - weight[i]] + values[i];

                    track[profit[i][w]] = i;

                }

            }

        }
    }
    //track the taken values
    i = profit[items][knapsack_weight];
    j = track[i];
    //cout<<i<<" "<<j<<endl;
    //for(j=track[knapsack_weight];j!=0;){
    while (j != 0) {
        //i = track[j];
        st.push(values[j]);
        i = i - values[j];
        j = track[i];
        //j = j-values[j];
    }
    while (!st.empty()) {

        printf("%d ", st.top());

        st.pop();

    }

    printf("sum:%d\n", profit[items][knapsack_weight]);
    return 0;
}
