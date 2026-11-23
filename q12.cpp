#include <iostream>
using namespace std;

void reverseArray(int *start, int size) {
    int *end = start + size - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}


void printArray(const int *p, int size) {
    for (const int *q = p; q < p + size; q++) {
        cout << *q << " ";
    }
    cout << endl;
}

int main() {
    int num = 42;
    int *ptr = &num;

    cout << "Value:                 " << num << endl;
    cout << "Address:               " << &num << endl;
    cout << "Value through pointer: " << *ptr << endl;

    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;

    cout << "\nBefore reverse: ";
    printArray(arr, size);

    reverseArray(arr, size);

    cout << "After reverse:  ";
    printArray(arr, size);

    return 0;
}