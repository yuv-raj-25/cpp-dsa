#include <iostream>
#include <vector>

using namespace std;

int main() {
    int L, W;
    cin >> L >> W;

    vector<vector<int> > room(L, vector<int>(W));

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < W; j++) {
            cin >> room[i][j];
        }
    }

    int H;
    cin >> H;

    int ideal_i = -1, ideal_j = -1;

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < W; j++) {
            if (room[i][j] > H) {
                ideal_i = i;
                ideal_j = j;
                break;
            }
        }
        if (ideal_i != -1) {
            break;
        }
    }

    if (ideal_i == -1) {
        ideal_i = L - 1;
        ideal_j = W - 1;
    }

    cout << ideal_i << " " << ideal_j << endl;

    return 0;
}