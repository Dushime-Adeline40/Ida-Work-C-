#include <iostream>
#include <bitset>
using namespace std;

unsigned char lights = 0;   

void printLights() {
    cout << bitset<8>(lights) << endl;
}


void turnOn(int n) {
    lights = lights | (1 << n);
}


void turnOff(int n) {
    lights = lights & ~(1 << n);
}


void toggle(int n) {
    lights = lights ^ (1 << n);
}

bool isOn(int n) {
    return (lights & (1 << n)) != 0;
}

int main() {
    cout << "Start:        "; printLights();

    turnOn(0);   cout << "turnOn(0):    "; printLights();
    turnOn(3);   cout << "turnOn(3):    "; printLights();
    turnOn(7);   cout << "turnOn(7):    "; printLights();
    toggle(3);   cout << "toggle(3):    "; printLights();
    toggle(5);   cout << "toggle(5):    "; printLights();
    turnOff(0);  cout << "turnOff(0):   "; printLights();

    cout << "\nisOn(5)? " << (isOn(5) ? "yes" : "no") << endl;
    cout << "isOn(0)? " << (isOn(0) ? "yes" : "no") << endl;

    return 0;
}