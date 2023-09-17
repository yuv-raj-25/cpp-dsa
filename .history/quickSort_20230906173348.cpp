#include <vector>

struct Result {
    Result() {}
    std::vector<int> output1;
};

Result altTab(int input1, int input2, int input3[]) {
    std::vector<int> applications;
    
    // Initialize the applications list with 1 to input1 in ascending order
    for (int i = 1; i <= input1; i++) {
        applications.push_back(i);
    }
    
    // Simulate Alt-Tab key presses
    for (int i = 0; i < input2; i++) {
        // Move the last element (most recently used) to the front of the list
        int lastApp = applications.back();
        applications.pop_back();
        applications.insert(applications.begin(), lastApp);
    }
    
    Result result;
    result.output1 = applications;
    return result;
}

int main() {
    // Test case 1
    int input1_1 = 4;
    int input2_1 = 3;
    int input3_1[] = {1, 2, 3, 4};
    Result output1_1 = altTab(input1_1, input2_1, input3_1);

    // Test case 2
    int input1_2 = 10;
    int input2_2 = 7;
    int input3_2[] = {4, 1, 3, 7, 6, 8, 5, 2, 10, 9};
    Result output1_2 = altTab(input1_2, input2_2, input3_2);

    return 0;
}
