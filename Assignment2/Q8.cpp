#include <iostream>
using namespace std;

void countVowelsConsonants(string str, int &vowels, int &consonants) {
    vowels = 0;
    consonants = 0;
    for(char c : str) {
        if(isalpha(c)) {
            c = tolower(c);
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
}

int main() {
    string str = "Hello World!";
    int vowels, consonants;

    countVowelsConsonants(str, vowels, consonants);

    cout << "Vowels: " << vowels << ", Consonants: " << consonants << endl;

    return 0;
}