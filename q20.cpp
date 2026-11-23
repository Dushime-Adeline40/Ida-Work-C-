#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>
using namespace std;

template <typename T, int N>
class RingBuffer {
private:
    array<T, N> data;
    int next = 0;     
    int count = 0;     

public:
    void push(T value) {
        data[next] = value;
        next = (next + 1) % N;         
        if (count < N) count++;
    }

    int size() const { return count; }

    double average() const {
        if (count == 0) return 0;
        double sum = 0;
        for (int i = 0; i < count; i++) sum += data[i];
        return sum / count;
    }

    void print() const {
        
        int start = (count < N) ? 0 : next;
        for (int i = 0; i < count; i++) {
            cout << data[(start + i) % N] << " ";
        }
        cout << endl;
    }
};

int main() {
    srand(time(nullptr));
    RingBuffer<int, 10> temps;   

    for (int i = 1; i <= 30; i++) {
        int reading = 20 + rand() % 16;     
        temps.push(reading);

        cout << "Reading " << i << ": " << reading << " | last " << temps.size() << ": ";
        temps.print();
        cout << "   average = " << temps.average() << endl;

        if (temps.average() > 30) {
            cout << "   WARNING: average temperature is above 30!" << endl;
        }
    }

    return 0;
}