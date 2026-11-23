#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;

    cout << "enter your name : ";
    getline(cin,name) ;
    cout << "put your age : ";
    cin >> age;

    cout << "Hello" << name << ", you areruranga" << age << " years old." << endl;
    return 0;
}