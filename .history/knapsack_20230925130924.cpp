#include <iostream>
#include <vector>

using namespace std;

// Function to solve the Knapsack Problem using dynamic programming
int knapsack(vector<int>& values, vector<int>& weights, int capacity) {
    int n = values.size();
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    // Build the dp table
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= capacity; j++) {
            if (weights[i - 1] > j) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weights[i - 1]] + values[i - 1]);
            }
        }
    }

    return dp[n][capacity]; // The result is in the bottom-right cell of the table.
}

int main() {
    vector<int> values = {60, 100, 120};
    vector<int> weights = {10, 20, 30};
    int capacity = 50;

    int maxValue = knapsack(values, weights, capacity);
    cout << "Maximum value: " << maxValue << endl;

    return 0;
}
