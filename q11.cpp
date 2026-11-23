#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void minMax(int arr[], int size, int &mn, int &mx) {
    mn = arr[0];
    mx = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < mn) mn = arr[i];
        if (arr[i] > mx) mx = arr[i];
    }
}

int main() {
    
    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swap:  x = " << x << ", y = " << y << endl;

    
    int numbers[] = {5, 2, 9, 1, 7};
    int size = 5;
    int smallest, largest;
    minMax(numbers, size, smallest, largest);
    cout << "Smallest = " << smallest << ", Largest = " << largest << endl;

    return 0;
}