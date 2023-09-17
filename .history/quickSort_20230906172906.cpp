#include <iostream>
#include<

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
    int input1, input2;
    int input3[100];

    // Test Case 1
    input1 = 4;
    input2 = 3;
    int testCase1[] = {1, 2, 3, 4};
    std::copy(testCase1, testCase1 + input1, input3);

    try {
        Result result1 = altTab(input1, input2, input3);

        std::cout << "Test Case 1 Output: {";
        for (int i = 0; i < input1; i++) {
            std::cout << result1.output1[i];
            if (i < input1 - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "}" << std::endl;
    } catch (const char* error) {
        std::cerr << "Error: " << error << std::endl;
    }

    // Test Case 2
    input1 = 10;
    input2 = 7;
    int testCase2[] = {4, 1, 3, 7, 6, 8, 5, 2, 10, 9};
    std::copy(testCase2, testCase2 + input1, input3);

    try {
        Result result2 = altTab(input1, input2, input3);

        std::cout << "Test Case 2 Output: {";
        for (int i = 0; i < input1; i++) {
            std::cout << result2.output1[i];
            if (i < input1 - 1) {
                std::cout << ", ";
            }
        }
        std::cout << "}" << std::endl;
    } catch (const char* error) {
        std::cerr << "Error: " << error << std::endl;
    }

    return 0;
}
