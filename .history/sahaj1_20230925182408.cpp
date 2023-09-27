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

    
    int row = -1, col = -1;
    for (int i = 0; i < L; ++i) {
        for (int j = 0; j < W; ++j) {
            if (H <= room[i][j]) {
                row = i;
                col = j;
                break;
            }
        }
        if (row != -1) {
            break;
        }
    }

    cout << row << " " << col << endl;

    return 0;
}
