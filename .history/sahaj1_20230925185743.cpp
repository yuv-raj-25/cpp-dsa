#include <iostream>
#include <vector>

using namespace std;

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

    int row = 0, col = W - 1; // Start from the first row and last column

    // Keep moving until you find the suitable spot
    while (row < L && col >= 0) {
        if (room[row][col] >= H) {
            col--;
        } else {
            if(room[row][col-1] <= H)
            // The current pot is smaller than H, so break the loop
            break;
        }
    }

    // If row goes beyond the last row, place it in the last row's rightmost column
    if (row == L) {
        row = L - 1;
        col = W - 1;
    }

    // Output the row and column indices of the suitable spot
    cout << row << " " << col << endl;

    return 0;
}
