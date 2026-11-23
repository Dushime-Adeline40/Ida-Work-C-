#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // (a) Multiplication table
    cout << "\nMultiplication table of " << n << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    // (b) Sum of 1 to n
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "\nSum of 1 to " << n << " = " << sum << endl;

    // (c) Star pattern
    cout << "\nPattern:" << endl;
    for (int row = 1; row <= n; row++) {
        for (int star = 1; star <= row; star++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}