#include <iostream>
#include <vector>

using namespace std;

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
    cin >> H; 

    int row = 0, col = W - 1; 

   
    while (row < L && col >= 0) {
        if (room[row][col] <= H) {
            row++;
        } else {
            if(room[row][col-1] <= H)
                break;
            col--;
        }
    }

    if (row == L) {
        row = L - 1;
        col = W - 1;
    }

    cout << row << " " << col << endl;

    return 0;
}
