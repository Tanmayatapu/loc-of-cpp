#include <iostream>
using namespace std;

int countOccurrences(int arr[], int size, int num) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] == num) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 2, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int num = 2;
    cout << "Number " << num << " occurs " << countOccurrences(arr, size, num) << " times." << endl;
    return 0;
}