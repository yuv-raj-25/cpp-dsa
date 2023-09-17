#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Result {
    int output1[100];
};

struct Result altTab(int input1, int input2, int input3[]) {
    // Handle the error case where input1 is greater than 100
    if (input1 > 100) {
        throw "error";
    }

    int usageCount[100] = {0}; // Initialize an array to store usage counts
    int currentApp = 0; // Index of the currently focused application

    for (int i = 0; i < input2; i++) {
        // Simulate pressing the 'Tab' key
        usageCount[currentApp]++; // Increment the usage count of the currently focused app
        currentApp = (currentApp + 1) % input1; // Move to the next app in a circular manner
    }

    // Create a Result struct to store the output
    struct Result result;
    for (int i = 0; i < input1; i++) {
        result.output1[i] = usageCount[i];
    }

    return result;
}
int main() {
    // Example usage:
    int input1 = 4;
    int input2 = 3;
    int input3[] = {1,2,3,4};

    Result result = altTab(input1, input2, input3);

    cout << "Final arrangement of applications based on usage count:\n";
    for (int i = 0; i < input1; i++) {
        cout << input3[i] << " (" << result.output1[i] << " times used)" << endl;
    }

    return 0;
}
