#include <iostream>
using namespace std;

int main() {
    float radius;
    const float PI = 3.14159;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    float diameter = 2 * radius;
    float circumference = 2 * PI * radius;
    float area = PI * radius * radius;

    cout << "Diameter: " << diameter << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Area: " << area << endl;

    return 0;
}