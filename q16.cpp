#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Sensor {
protected:
    string name;

public:
    Sensor(string sensorName) : name(sensorName) {}
    virtual ~Sensor() {}                 // virtual destructor: needed for safe delete

    virtual float read() = 0;            // pure virtual: derived classes MUST write it
    string getName() const { return name; }
};

class TemperatureSensor : public Sensor {
public:
    TemperatureSensor() : Sensor("Temperature Sensor") {}
    float read() override {
        return 20 + rand() % 16;         // simulated: 20 to 35 degrees C
    }
};

class LightSensor : public Sensor {
public:
    LightSensor() : Sensor("Light Sensor") {}
    float read() override {
        return rand() % 1001;            // simulated: 0 to 1000 lux
    }
};

int main() {
    srand(time(nullptr));

    Sensor *sensors[2];
    sensors[0] = new TemperatureSensor();
    sensors[1] = new LightSensor();

    // One loop, and the right read() is called for each object (polymorphism)
    for (int i = 0; i < 2; i++) {
        cout << sensors[i]->getName() << " reads: " << sensors[i]->read() << endl;
    }

    for (int i = 0; i < 2; i++) {
        delete sensors[i];
    }

    return 0;
}