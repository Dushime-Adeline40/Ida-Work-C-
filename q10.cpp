#include <iostream>
using namespace std;

int main() {
    const int N = 3;
    int matrix[N][N];

    
    cout << "Enter the 3x3 matrix (9 numbers):" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    
    cout << "\nMatrix:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }


    cout << "\nRow sums:" << endl;
    for (int i = 0; i < N; i++) {
        int rowSum = 0;
        for (int j = 0; j < N; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }

    
    int diagonal = 0;
    for (int i = 0; i < N; i++) {
        diagonal += matrix[i][i];
    }
    cout << "\nMain diagonal sum: " << diagonal << endl;

    
    cout << "\nTranspose:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[j][i] << "\t";
        }
        cout << endl;
    }

    return 0;
}