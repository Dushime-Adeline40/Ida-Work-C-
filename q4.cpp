#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter score (0-100): ";
    cin >> score;

    
    cout << "\n[if/else] ";
    if (score < 0 || score > 100) {
        cout << "Invalid" << endl;
    } else if (score >= 90) {
        cout << "Grade: A" << endl;
    } else if (score >= 80) {
        cout << "Grade: B" << endl;
    } else if (score >= 70) {
        cout << "Grade: C" << endl;
    } else if (score >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    // ---------- Version 2: switch ----------
    cout << "[switch]  ";
    if (score < 0 || score > 100) {
        cout << "Invalid" << endl;
    } else {
        switch (score / 10) {
            case 10:
            case 9:
                cout << "Grade: A" << endl;
                break;
            case 8:
                cout << "Grade: B" << endl;
                break;
            case 7:
                cout << "Grade: C" << endl;
                break;
            case 6:
                cout << "Grade: D" << endl;
                break;
            default:
                cout << "Grade: F" << endl;
        }
    }

    return 0;
}