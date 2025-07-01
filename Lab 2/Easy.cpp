/*
id: 22012189
name: Adam Mukhlis
group: g1
lab: 2 (Easy) - Print matrix in snake pattern
problem: https://www.geeksforgeeks.org/dsa/print-matrix-snake-pattern/
*/

#include <iostream>
using namespace std;

void printSnakePattern(int matrix[][100], int n) {
    for (int i = 0; i < n; i++) {
        // Even row: left to right
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++)
                cout << matrix[i][j] << " ";
        } 
        // Odd row: right to left
        else {
            for (int j = n - 1; j >= 0; j--)
                cout << matrix[i][j] << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter size of matrix (n x n): ";
    cin >> n;

    int matrix[100][100];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    cout << "Snake Pattern:\n";
    printSnakePattern(matrix, n);

    return 0;
}
