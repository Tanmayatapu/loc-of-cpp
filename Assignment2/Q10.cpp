#include <iostream>
using namespace std;

void countCharacters(string str, int &alphabets, int &digits, int &specialChars) {
    alphabets = 0;
    digits = 0;
    specialChars = 0;
    for(char c : str) {
        if(isalpha(c)) {
            alphabets++;
        } else if(isdigit(c)) {
            digits++;
        } else {
            specialChars++;
        }
    }
}

int main() {
    string str = "Hello World! 123";
    int alphabets, digits, specialChars;

    countCharacters(str, alphabets, digits, specialChars);

    cout << "Alphabets: " << alphabets << ", Digits: " << digits << ", Special Characters: " << specialChars << endl;

    return 0;
}