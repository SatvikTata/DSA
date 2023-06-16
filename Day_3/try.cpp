#include <iostream>

int findUnique(int arr[], int n) {
    int result = 0;

    // XOR each element in the array
    for (int i = 0; i < n; i++) {
        result ^= arr[i];
    }

    return result;
}

int main() {
    int arr[] = {1, 2, 4, 4, 2, 3, 1,1,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "The unique element is: " << findUnique(arr, n) << std::endl;
    return 0;
}
