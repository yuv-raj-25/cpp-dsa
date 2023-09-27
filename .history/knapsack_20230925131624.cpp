#include <iostream>
#include <vector>

using namespace std;

bool subsetSum(int nums[], int n, int targetSum) {
    bool dp[n + 1][targetSum + 1];

    for (int i = 0; i <= n; i++) {
        dp[i][0] = true;
    }

    // Build the dp table and track the selected elements
    vector<int> selectedElements;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= targetSum; j++) {
            if (nums[i - 1] > j) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
                if (dp[i][j] && dp[i - 1][j - nums[i - 1]]) {
                    selectedElements.push_back(nums[i - 1]);
                }
            }
        }
    }

    // Print the selected subset
    if (!dp[n][targetSum]) {
        cout << "No subset with the target sum exists." << endl;
    } else {
        cout << "Subset with the target sum: ";
        for (int elem : selectedElements) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return dp[n][targetSum];
}

int main() {
    int nums[] = {3, 34, 4, 12, 5, 2};
    int n = sizeof(nums) / sizeof(nums[0]);
    int targetSum = 9;

    bool isSubsetSumPossible = subsetSum(nums, n, targetSum);

    return 0;
}
