#include <iostream>
using namespace std;

int diagonalSum(int matrix[][10], int n) {
    int sum_diag = 0;
    for (int i = 0; i < n; i++) {
        sum_diag += matrix[i][i];
    }
    return sum_diag;
}

int main() {
    int n;
    cout << "Enter the size of the square matrix (n x n): ";
    cin >> n;

    int matrix[10][10];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int result = diagonalSum(matrix, n);
    cout << "Sum of diagonal elements of the matrix: " << result << endl;

    return 0;
}

