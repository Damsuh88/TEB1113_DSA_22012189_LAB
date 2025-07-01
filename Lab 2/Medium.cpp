/*
id: 22012189
name: Adam Mukhlis
group: g1
lab: 2 (Medium) - Print a given matrix in spiral form
problem: https://www.geeksforgeeks.org/dsa/print-a-given-matrix-in-spiral-form/
*/

#include <iostream>
using namespace std;

void printSpiral(int mat[][100], int m, int n) {
    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        // 1. Print top row
        for (int i = left; i <= right; i++)
            cout << mat[top][i] << " ";
        top++;

        // 2. Print right column
        for (int i = top; i <= bottom; i++)
            cout << mat[i][right] << " ";
        right--;

        // 3. Print bottom row (if not already passed)
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                cout << mat[bottom][i] << " ";
            bottom--;
        }

        // 4. Print left column (if not already passed)
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                cout << mat[i][left] << " ";
            left++;
        }
    }
    cout << endl;
}

int main() {
    int m, n;
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;

    int mat[100][100];
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];

    cout << "Spiral Order:\n";
    printSpiral(mat, m, n);

    return 0;
}
