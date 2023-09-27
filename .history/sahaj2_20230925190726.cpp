#include <iostream>
#include <vector>

using namespace std;

vector<vector<char>> recoverBattlefield(int m, int n, const vector<char>& targets, const vector<int>& columnIndices, const vector<int>& rowPointers) {
    vector<vector<char>> battlefield(m, vector<char>(n, 'z')); // Initialize the battlefield with 'z'

    int targetsIndex = 0; // Index for iterating through targets
    for (int i = 0; i < m; i++) {
        int start = rowPointers[i];
        int end = rowPointers[i + 1];

        for (int j = start; j < end; j++) {
            int col = columnIndices[j];
            char target = targets[targetsIndex++];
            battlefield[i][col] = target;
        }
    }

    return battlefield;
}

int main() {
    int m, n;
    cin >> m;
    cin >> n;

    vector<char> targets;
    vector<int> columnIndices;
    vector<int> rowPointers(m + 1);

  
    for (int i = 0; i < m + n-3; i++) {
        char target;
        cin >> target;
        targets.push_back(target);
    }

    
    for (int i = 0; i < m + n-3; i++) {
        int col;
        cin >> col;
        columnIndices.push_back(col);
    }

   
    for (int i = 0; i <= m; i++) {
        cin >> rowPointers[i];
    }

    vector<vector<char>> battlefield = recoverBattlefield(m, n, targets, columnIndices, rowPointers);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << battlefield[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}