#include <iostream>
#include <vector>

using namespace std;

vector<int> subsetSum(int nums[], int n, int targetSum) {
    bool dp[n + 1][targetSum + 1];

    for (int i = 0; i <= n; i++) {
        dp[i][0] = true;
    }

    vector<vector<bool> > selected(n + 1, vector<bool>(targetSum + 1, false));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= targetSum; j++) {
            if (nums[i - 1] > j) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
                if (dp[i][j] && dp[i - 1][j - nums[i - 1]]) {
                    selected[i][j] = true;
                }
            }
        }
    }

    vector<int> subset;
    int i = n, j = targetSum;
    while (i > 0 && j > 0) {
        if (selected[i][j]) {
            subset.push_back(nums[i - 1]);
            j -= nums[i - 1];
        }
        i--;
    }

    return subset;
}

int main() {
    int nums[] = {3, 34, 4, 12, , 2};
    int n = sizeof(nums) / sizeof(nums[0]);
    int targetSum = 9;

    vector<int> result = subsetSum(nums, n, targetSum);

    if (result.empty()) {
        cout << "No subset with the target sum exists." << endl;
    } else {
        cout << "Subset with the target sum: ";
        for(int i = 0; i < result.size(); i++)
        {
            cout<<result[i]<<" ";
        }
        cout << endl;
    }

    return 0;
}
