#include <iostream>
#include <algorithm>

struct Result {
    int output1[100];
};

struct Result altTab(int input1, int input2, int input3[]) {
    if (input1 > 100) {
        throw "error"; // Handle the error case where input1 is greater than 100
    }

    for (int i = 0; i < input2; i++) {
        // Simulate pressing the 'Tab' key
        int mostRecentApp = input3[0];
        for (int j = 0; j < input1 - 1; j++) {
            input3[j] = input3[j + 1];
        }
        input3[input1 - 1] = mostRecentApp;
    }

    struct Result result;
    for (int i = 0; i < input1; i++) {
        result.output1[i] = input3[i];
    }

    return result;
}

int main() {
    int input1 = 10;
    int input2 = 7;
    int input3[] = {4, 1, 3, 7, 6, 8, 5, 2, 10, 9};

    try {
        Result result = altTab(input1, input2, input3);

        std::cout << "Final arrangement of applications: {";
        for (int i = 0; i < input1; i++) {
            std::cout << result.output1[i];
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
