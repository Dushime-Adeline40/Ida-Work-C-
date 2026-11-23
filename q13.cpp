#include <iostream>
using namespace std;


enum Status { OK, WARNING, ERROR };

struct Reading {
    int id;
    float temperature;
    float humidity;
    Status status;
};

Status getStatus(float temperature) {
    if (temperature > 40) return ERROR;
    if (temperature > 30) return WARNING;
    return OK;
}

const char *statusName(Status s) {
    switch (s) {
        case OK:      return "OK";
        case WARNING: return "WARNING";
        case ERROR:   return "ERROR";
    }
    return "UNKNOWN";
}

int main() {
    Reading readings[5] = {
        {1, 25.5f, 60.0f, OK},
        {2, 32.0f, 55.5f, OK},
        {3, 41.2f, 40.0f, OK},
        {4, 28.0f, 70.2f, OK},
        {5, 35.7f, 48.3f, OK}
    };

    for (int i = 0; i < 5; i++) {
        readings[i].status = getStatus(readings[i].temperature);
    }

    
    cout << "ID  Temp(C)  Humidity(%)  Status" << endl;
    cout << "-----------------------------------" << endl;
    for (int i = 0; i < 5; i++) {
        cout << readings[i].id << "   "
             << readings[i].temperature << "     "
             << readings[i].humidity << "        "
             << statusName(readings[i].status) << endl;
    }

    return 0;
}