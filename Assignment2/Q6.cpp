#include <iostream>
using namespace std;

int findMaxOccurring(int arr[], int size) {
    int maxCount = 0;
    int maxElement = arr[0];
    for(int i = 0; i < size; i++) {
        int count = 0;
        for(int j = 0; j < size; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > maxCount) {
            maxCount = count;
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int main() {
    int arr[] = {1,