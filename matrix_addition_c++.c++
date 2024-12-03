#include <iostream>
#include <vector>

using namespace std;

// 4x4 matrix
void inputMatrix(vector<vector<int>>& matrix, int matrixNum) {
    cout << "Enter elements for Matrix " << matrixNum << " (16 numbers):" << endl;
    for (int i = 0; i < 4; ++i) {
        vector<int> row;
        for (int j = 0; j < 4; ++j) {
            int element;
            cout << "Enter element [" << i + 1 << "," << j + 1 << "]: ";
            cin >> element;
            row.push_back(element);
        }
        matrix.push_back(row);
    }
}

// Function matrix
void displayMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (const auto& element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
}

// Function calculate
vector<vector<int>> sumMatrices(const vector<vector<int>>& matrix1, const vector<vector<int>>& matrix2) {
    vector<vector<int>> result(4, vector<int>(4, 0));
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    return result;
}

int main() {
    cout << "Matrix Addition Program\n";

    vector<vector<int>> matrix1;
    vector<vector<int>> matrix2;

    // Input
    inputMatrix(matrix1, 1);
    inputMatrix(matrix2, 2);

    // Display
    cout << "\nMatrix 1:" << endl;
    displayMatrix(matrix1);

    cout << "\nMatrix 2:" << endl;
    displayMatrix(matrix2);

    // Calculate and display
    vector<vector<int>> sumMatrix = sumMatrices(matrix1, matrix2);

    cout << "\nSum of Matrix 1 and Matrix 2:" << endl;
    displayMatrix(sumMatrix);

    return 0;
}
