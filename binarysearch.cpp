#include <iostream>

using namespace std;

int perfect_string(string str, int n) {
  // Create a table dp of size (n + 1) x (n + 1).
  int dp[n + 1][n + 1];

  // Initialize the table.
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= n; j++) {
      dp[i][j] = 0;
    }
  }

  // Fill in the table bottom-up.
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      if (str[i - 1] == '0') {
        dp[i][j] = dp[i - 1][j];
      } else {
        // We can either delete the current character or not delete it.
        dp[i][j] = min(dp[i - 1][j], 1 + dp[i - 1][j - 1]);
      }
    }
  }

  return dp[n][n];
}

int main() {
  string str;
  int n;

  cout << "Enter a binary string: ";
  cin >> str;

  n = str.length();

  cout << "The minimum number of operations required is: " << perfect_string(str, n) << endl;

  return 0;
}
