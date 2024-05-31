#include <iostream>
using namespace std;

void copyArray(int src[], int dest[], int size) {
    for(int i = 0; i < size; i++) {
        dest[i] = src[i];
    }
}

int main() {
    int src[] = {1, 2, 3, 4, 5};
    int size = sizeof(src)/sizeof(src[0]);
    int dest[size];

    copyArray(src, dest, size);

    cout << "Copied array: ";
    for(int i = 0; i < size; i++) {
        cout << dest[i] << " ";
    }
    cout << endl;

    return 0;
}