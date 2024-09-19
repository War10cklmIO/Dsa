#include <iostream>
using namespace std;

// Recursive helper function
int binarySearchRecursive(int arr[], int start, int end, int key) {
    if (start > end) {
        return -1;  // Base case: key not found
    }

    int mid = start + (end - start) / 2;

    if (key == arr[mid]) {
        return mid;  // Key found at index mid
    }

    if (key > arr[mid]) {
        // Key is in the right half
        return binarySearchRecursive(arr, mid + 1, end, key);
    } else {
        // Key is in the left half
        return binarySearchRecursive(arr, start, mid - 1, key);
    }
}

// Public function to call the recursive helper
int binarySearch(int arr[], int size, int key) {
    return binarySearchRecursive(arr, 0, size - 1, key);
}

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};

    int key = 4;
    int index = binarySearch(arr, 6, key);

    if (index != -1) {
        cout << "Index of " << key << ": " << index << endl;
    } else {
        cout << key << " not found in the array" << endl;
    }

    return 0;
}
