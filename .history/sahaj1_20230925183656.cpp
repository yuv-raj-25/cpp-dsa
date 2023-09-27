#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int>& row, int H) {
    int left = 0;
    int right = row.size() - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (row[mid] >= H) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return result;
}

int main() {
    int L, W;
    cin >> L >> W;

    // Create a 2D vector to store the heights of the flower pots
    vector<vector<int> > room(L, vector<int>(W));

    // Read the heights of the existing flower pots into the room vector
    for (int i = 0; i < L; ++i) {
        for (int j = 0; j < W; ++j) {
            cin >> room[i][j];
        }
    }

    int H;
    cin >> H; // Height of the new flower pot

    // Find the suitable spot for the new flower pot using binary search
    int row = -1, col = -1;
    for (int i = 0; i < L; ++i) {
        int index = binarySearch(room[i], H);
        if (index != -1) {
            row = i;
            col = index;
            break;
        }
    }

    // Output the row and column indices of the suitable spot
    cout << row << " " << col << endl;

    return 0;
}
