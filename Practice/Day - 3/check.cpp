#include <iostream>
#include <vector>
using namespace std;

bool checkPath(vector<vector<int>> &matrix, int i, int j, int n, int m) {
    // Out of bounds
    if (i >= n || j >= m)
        return false;

    // Blocked cell
    if (matrix[i][j] == 1)
        return false;

    // Destination reached
    if (i == n - 1 && j == m - 1)
        return true;

    // Move right or down
    return checkPath(matrix, i, j + 1, n, m) || checkPath(matrix, i + 1, j, n, m);
}

int main() {
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    cout << "Enter the matrix elements (0 for open, 1 for blocked):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nThe Given Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    if (checkPath(matrix, 0, 0, n, m))
        cout << "\nPath Exists!\n";
    else
        cout << "\nNo Path Found!\n";

    return 0;
}
