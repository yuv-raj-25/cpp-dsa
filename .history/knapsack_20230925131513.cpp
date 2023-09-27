#include <iostream>

using namespace std;

// Function to solve the Subset Sum Problem using dynamic programming
bool subsetSum(int nums[], int n, int targetSum) {
    bool dp[n + 1][targetSum + 1];

    for (int i = 0; i <= n; i++) {
        dp[i][0] = true;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= targetSum; j++) {
            if (nums[i - 1] > j) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
            }
        }
    }

    return dp[n][targetSum];
}

int main() {
    int nums[] = {3, 34, 4, 12, 5, 2};
    int n = sizeof(nums) / sizeof(nums[0]);
    int targetSum = 9;

    bool isSubsetSumPossible = subsetSum(nums, n, targetSum);

    if (isSubsetSumPossible) {
        cout << "A subset with the target sum exists." << endl;
    } else {
        cout << "No subset with the target sum exists." << endl;
    }

    return 0;
}
