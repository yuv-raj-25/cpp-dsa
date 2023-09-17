#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Result {
    int output1[100];
};

struct AppInfo {
    string appName;
    int usageCount;

    AppInfo(const string& name) : appName(name), usageCount(0) {}
};

bool sortByUsageCount(const AppInfo& a, const AppInfo& b) {
    return a.usageCount > b.usageCount;
}

struct Result altTab(int input1, int input2, vector<string> input3) {
    vector<AppInfo> apps;

    for (const string& appName : input3) {
        apps.emplace_back(appName);
    }

    for (int i = 0; i < input2; i++) {
        // Simulate pressing the 'Tab' key
        if (!apps.empty()) {
            apps[0].usageCount++; // Increment the usage count of the most recently used app
            rotate(apps.begin(), apps.begin() + 1, apps.end()); // Rotate the apps
        }
    }

    // Sort the apps based on usage count in descending order
    sort(apps.begin(), apps.end(), sortByUsageCount);

    Result result;
    for (int i = 0; i < input1; i++) {
        result.output1[i] = i < apps.size() ? apps[i].usageCount : 0;
    }

    return result;
}

int main() {
    // Example usage:
    int input1 = 5;
    int input2 = 2;
    vector<string> input3 = {"Libraries", "Internet Explorer", "Photos", "File Explorer", "Calculator"};

    Result result = altTab(input1, input2, input3);

    cout << "Final arrangement of applications based on usage count:\n";
    for (int i = 0; i < input1; i++) {
        cout << input3[i] << " (" << result.output1[i] << " times used)" << endl;
    }

    return 0;
}
