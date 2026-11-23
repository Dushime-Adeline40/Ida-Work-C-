#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int arr[SIZE];

    
    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> arr[i];
    }


    int largest = arr[0];
    int smallest = arr[0];
    int sum = 0;

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        sum += arr[i];
    }

    double average = (double)sum / SIZE;

    cout << "\nLargest:  " << largest << endl;
    cout << "Smallest: " << smallest << endl;
    cout << "Average:  " << average << endl;


    cout << "Reversed: ";
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}