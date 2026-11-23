#include <iostream>
using namespace std;

enum class State { RED, GREEN, YELLOW };

const int RED_TIME = 5;
const int GREEN_TIME = 4;
const int YELLOW_TIME = 2;

const char *stateName(State s) {
    switch (s) {
        case State::RED:    return "RED";
        case State::GREEN:  return "GREEN";
        case State::YELLOW: return "YELLOW";
    }
    return "?";
}

int main() {
    State state = State::RED;
    int ticksLeft = RED_TIME;

    for (int tick = 1; tick <= 30; tick++) {
    
        bool button = (tick == 7 || tick == 11 || tick == 15);

        
        bool early = false;
        if (button && state == State::GREEN) {
            state = State::YELLOW;
            ticksLeft = YELLOW_TIME;
            early = true;
        }

        cout << "Tick " << tick << ": " << stateName(state);
        if (button && early)  cout << "   <- button pressed, YELLOW early";
        if (button && !early) cout << "   <- button pressed, ignored (not GREEN)";
        cout << endl;

        
        switch (state) {
            case State::RED:
                if (--ticksLeft == 0) { state = State::GREEN;  ticksLeft = GREEN_TIME; }
                break;
            case State::GREEN:
                if (--ticksLeft == 0) { state = State::YELLOW; ticksLeft = YELLOW_TIME; }
                break;
            case State::YELLOW:
                if (--ticksLeft == 0) { state = State::RED;    ticksLeft = RED_TIME; }
                break;
        }
    }

    return 0;
}