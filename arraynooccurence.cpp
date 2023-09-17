#include <iostream>
#include <map>
#include <vector>
using namespace std;

void find_occurrences(vector<int> arr) {
    map<int, int> num_occurrences;

    for(int num : arr) {
        
        num_occurrences[num]++;
    }

    for(auto element : num_occurrences) {
        cout << "Number " << element.first << " occurs " << element.second << " time(s) in the array." << endl;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 2, 4, 3, 1, 5, 6, 5, 4};
    find_occurrences(arr);
    return 0;
}
