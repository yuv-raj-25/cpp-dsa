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

    vector<vector<int> > room(L, vector<int>(W));

    for (int i = 0; i < L; ++i) {
        for (int j = 0; j < W; ++j) {
            cin >> room[i][j];
        }
    }

    int H;
    cin >> H; // Height of the new flower pot

    int row = -1, col = -1;
    for (int i = 0; i < L; ++i) {
        int index = binarySearch(room[i], H);
        if (index != -1) {
            row = i;
            col = index;
            break;
        }
    }

    // If H is greater than the last row's rightmost pot, place it in the last row's rightmost column
    if (row == -1) {
        row = L - 1;
        col = W - 1;
    }

    // Output the row and column indices of the suitable spot
    cout << row << " " << col << endl;

    return 0;
}
