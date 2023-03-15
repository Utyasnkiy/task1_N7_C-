#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

void reverseColumns(int matrix[][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0, k = COLS - 1; j < k; j++, k--) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][k];
            matrix[i][k] = temp;    
        }
    }
}

int main() {
    int matrix[ROWS][COLS] = { {1, 2, 3},
                              {4, 5, 6},
                              {7, 8, 9} };

    cout << "Original matrix: " << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    reverseColumns(matrix);

    cout << "Matrix with reversed columns: " << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
