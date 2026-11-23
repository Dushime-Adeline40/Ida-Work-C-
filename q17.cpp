#include <iostream>
#include <vector>
using namespace std;

void withNew() {
    int n;
    cout << "[new] How many numbers to store? ";
    cin >> n;
    if (n <= 0) {
        cout << "Please enter a positive number." << endl;
        return;
    }

    int *numbers = new int[n];
    double sum = 0;
    for (int i = 0; i < n; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
        sum += numbers[i];
    }
    cout << "Average = " << sum / n << endl;

    delete[] numbers;     
}


void withVector() {
    int n;
    cout << "\n[vector] How many numbers to store? ";
    cin >> n;
    if (n <= 0) {
        cout << "Please enter a positive number." << endl;
        return;
    }

    vector<int> numbers(n);
    double sum = 0;
    for (int i = 0; i < n; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
        sum += numbers[i];
    }
    cout << "Average = " << sum / n << endl;

}

int main() {
    withNew();
    withVector();
    return 0;
}