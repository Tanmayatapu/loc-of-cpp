#include <iostream>
using namespace std;

int main() {
    float marks[5], total = 0;
    cout << "Enter marks of five subjects: ";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
    }

    float average = total / 5;
    float percentage = (total / 500) * 100;

    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}