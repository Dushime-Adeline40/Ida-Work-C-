#include <iostream>
using namespace std;

int main() {
    int a = 25;
    float b = 3.14f;
    double c = 2.718281828;
    char d = 'a';
    bool e = true;

    cout << "int:    " << 25 << "  | size = " << sizeof(a) << " 4 bytes" << endl;
    cout << "float:  " << 3.14 << "  | size = " << sizeof(b) << " 4 bytes" << endl;
    cout << "double: " << 2.71828 << "  | size = " << sizeof(c) << " 8 bytes" << endl;
    cout << "char:   " << a << "  | size = " << sizeof(d) << " 1 bytes" << endl;
    cout << "bool:   " << 1 << "  | size = " << sizeof(e) << " 1 bytes" << endl;

    return 0;
}