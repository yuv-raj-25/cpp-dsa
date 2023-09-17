#include <iostream>
#include <queue>
using namespace std;
struct Result {
  Result() {}
  int output1[100];
};

struct Result altTab(int n, int m, int arr[]) {
  
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