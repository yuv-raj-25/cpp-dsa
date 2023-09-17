#include <iostream>
#include <map>
#include <vector>
using namespace std;

void find_occurrences(vector<int> arr) {
    // Initialize an empty map
    map<int, int> num_occurrences;

    // Iterate through the array elements
    for(int num : arr) {
        // Check if the number exists in the map
        // If it exists, increment the occurrence count by 1
        // If it doesn't exist, add it to the map with occurrence count 1
        num_occurrences[num]++;
    }

    // Print the numbers and their occurrences
    for(auto element : num_occurrences) {
        cout << "Number " << element.first << " occurs " << element.second << " time(s) in the array." << endl;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 2, 4, 3, 1, 5, 6, 5, 4};
    find_occurrences(arr);
    return 0;
}
