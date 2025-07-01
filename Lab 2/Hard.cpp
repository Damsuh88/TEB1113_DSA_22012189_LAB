/*
id: 22012189
name: Adam Mukhlis
group: g1
lab: 2 (Hard) - K'th element in spiral form of matrix
problem: https://www.geeksforgeeks.org/dsa/print-kth-element-spiral-form-matrix/
*/

#include <iostream>
using namespace std;

int findKthElement(int mat[][100], int n, int m, int k) {
    int top = 0, bottom = n - 1;
    int left = 0, right = m - 1;
    int count = 0;

    while (top <= bottom && left <= right) {
        // Left to right
        for (int i = left; i <= right; i++) {
            count++;
            if (count == k)
                return mat[top][i];
        }
        top++;

        // Top to bottom
        for (int i = top; i <= bottom; i++) {
            count++;
            if (count == k)
                return mat[i][right];
        }
        right--;

        // Right to left
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                count++;
                if (count == k)
                    return mat[bottom][i];
            }
            bottom--;
        }

        // Bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                count++;
                if (count == k)
                    return mat[i][left];
            }
            left++;
        }
    }

    return -1; // if k is out of bounds
}

int main() {
    int n, m, k;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;
    
    int mat[100][100];
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];

    cout << "Enter value of k: ";
    cin >> k;

    int result = findKthElement(mat, n, m, k);
    if (result != -1)
        cout << "The " << k << "th element in spiral order is: " << result << endl;
    else
        cout << "k is larger than total number of elements." << endl;

    return 0;
}
