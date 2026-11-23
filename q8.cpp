#include <iostream>
using namespace std;

int main() {
    const int SIZE = 8;
    int arr[SIZE];

    cout << "Enter " << SIZE << " numbers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    // Bubble sort
    for (int pass = 0; pass < SIZE - 1; pass++) {
        for (int j = 0; j < SIZE - 1 - pass; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\nSorted: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Search
    int target;
    cout << "\nNumber to search for: ";
    cin >> target;

    int position = -1;
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == target) {
            position = i;
            break;
        }
    }

    if (position != -1) {
        cout << target << " found at position " << position + 1
             << " (index " << position << ")" << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}