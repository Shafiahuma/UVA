#include <bits/stdc++.h>

using namespace std;

int main() {
    int knapsack_weight, items , i, j, w;
    int t, k, kk;
    cin >> t;
    for (k = 0; k < t; k++) {
        vector<int>weight;
        vector<int>values;
        cin >> kk;
       // cout<<kk<<endl;
        int p;
        int sum = 0;
        weight.push_back(0);
        values.push_back(0);
        for (int tt = 0; tt < kk; tt++) {
            cin >> p;
            weight.push_back(p);
            values.push_back(p);
            sum += p;
        }
        items = kk;
        knapsack_weight=sum/2;
        int profit[items+5][knapsack_weight+5];
        for (i = 0; i <= items; i++) {
            profit[i][0] = 0;
        }
        for (w = 0; w <= knapsack_weight; w++) {
            profit[0][w] = 0;
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
                    }
                }
            }
        }
        //cout<<profit[items][knapsack_weight]<<endl;
        printf("%d\n", sum-(2*profit[items][knapsack_weight]));
        sum=0;
        values.clear();
        weight.clear();
    }
    return 0;
}
