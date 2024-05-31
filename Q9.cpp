#include <iostream>
using namespace std;

int main() {
    float angle1, angle2, angle3;
    cout << "Enter three angles of the triangle: ";
    cin >> angle1 >> angle2 >> angle3;

    if (angle1 + angle2 + angle3 == 180) {
        cout << "The triangle is valid." << endl;
    } else {
        cout << "The triangle is not valid." << endl;
    }

    return 0;
}