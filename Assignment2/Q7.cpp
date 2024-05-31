#include <iostream>
using namespace std;

void moveNegatives(int arr[], int size) {
    int j = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] < 0) {
            if(i != j) {
                swap(arr[i], arr[j]);
            }
            j++;
        }
    }
}

int main() {
    int arr[] = {1, -2, 3, -4, -5, 6, 7, -8};
    int size = sizeof(arr)/sizeof(arr[0]);

    moveNegatives(arr, size);

    cout << "Array after moving negative elements: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}