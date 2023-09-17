#include <iostream>
#include <queue>
using
struct Result {
  Result() {}
  int output1[100];
};

struct Result altTab(int n, int m, int arr[]) {
  // Create a circular queue to store the applications.
  queue<int> q;
  for (int i = 0; i < n; i++) {
    q.push(arr[i]);
  }

  // Move the pointer to the most recently used application.
  for (int i = 0; i < m; i++) {
    int temp = q.front();
    q.pop();
    q.push(temp);
  }

  // Get the final arrangement of applications.
  int i = 0;
  while (!q.empty()) {
    result.output1[i++] = q.front();
    q.pop();
  }

  return result;
}

int main() {
  int n = 4;
  int m = 3;
  int arr[] = {1, 2, 3, 4};

  Result result = altTab(n, m, arr);

  for (int i = 0; i < n; i++) {
    std::cout << result.output1[i] << " ";
  }

  std::cout << std::endl;

  return 0;
}