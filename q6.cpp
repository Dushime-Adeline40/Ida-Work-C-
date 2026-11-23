#include <iostream>
using namespace std;


int maxOf(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}


float celsiusToFahrenheit(float c) {
    return c * 9.0f / 5.0f + 32.0f;
}


bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    
    cout << "maxOf(7, 12) = " << maxOf(7, 12) << endl;
    cout << "maxOf(-3, -8) = " << maxOf(-3, -8) << endl;

    
    cout << "25 C = " << celsiusToFahrenheit(25) << " F" << endl;
    cout << "0 C = " << celsiusToFahrenheit(0) << " F" << endl;

    
    cout << "isPrime(7) = " << isPrime(7) << endl;
    cout << "isPrime(10) = " << isPrime(10) << endl;

    
    cout << "\nPrimes below 100:" << endl;
    for (int i = 2; i < 100; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}