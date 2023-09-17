#include <iostream>
#include <queue>

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
    q.push(q.front());
    q.pop();
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
   int main() {
  int n = 4;
  int m = 3;
  int arr[] = {1, 2, 3, 4};

  Result result = altTab(n, m, arr);

  for (int i = 0; i < n; i++) {
    cout << result.output1[i] << " ";
  }

  cout << endl;

  return 0;
}
}
