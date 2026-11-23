#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    
    cout << "\nCharacters: " << sentence.length() << endl;

    
    int words = 0;
    int vowels = 0;
    bool inWord = false;

    for (char c : sentence) {
        
        if (isspace(c)) {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            words++;
        }

    
        char lower = tolower(c);
        if (lower == 'a' || lower == 'e' || lower == 'i' ||
            lower == 'o' || lower == 'u') {
            vowels++;
        }
    }

    cout << "Words:      " << words << endl;
    cout << "Vowels:     " << vowels << endl;

    
    string upper = sentence;
    for (char &c : upper) {
        c = toupper(c);
    }
    cout << "Uppercase:  " << upper << endl;

    
    string firstWord = "";
    for (char c : sentence) {
        if (isspace(c)) {
            if (!firstWord.empty()) break;
        } else {
            firstWord += c;
        }
    }

    
    bool palindrome = true;
    int left = 0;
    int right = firstWord.length() - 1;
    while (left < right) {
        if (tolower(firstWord[left]) != tolower(firstWord[right])) {
            palindrome = false;
            break;
        }
        left++;
        right--;
    }

    cout << "First word \"" << firstWord << "\" is "
         << (palindrome ? "a palindrome" : "not a palindrome") << endl;

    return 0;
}