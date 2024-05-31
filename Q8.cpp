#include <iostream>
using namespace std;

int main() {
    float cm;
    cout << "Enter length in centimeters: ";
    cin >> cm;

    float meters = cm / 100;
    float kilometers = cm / 100000;

    cout << "Length in meters: " << meters << " m" << endl;
    cout << "Length in kilometers: " << kilometers << " km" << endl;

    return 0;
}