#include <iostream>

using namespace std;

int knapsack(int values[], int weights[], int n, int capacity) {
    int dp[n + 1][capacity + 1];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= capacity; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else if (weights[i - 1] <= j) {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weights[i - 1]] + values[i - 1]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][capacity];
}

int main() {
    int values[] = {1,2,4,5,};
    int weights[] = {5,4,8,6};
    int n = sizeof(values) / sizeof(values[0]);
    int capacity = 5;

    int maxValue = knapsack(values, weights, n, capacity);
    cout << "Maximum value: " << maxValue << endl;

    return 0;
}
