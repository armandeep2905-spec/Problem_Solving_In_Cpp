#include<iostream>
using namespace std;

int findMissingBinary(int arr[], int n) {
    int low = 0, high = n - 2; // array has n-1 elements
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == mid + 1) {
            // left side is correct → go right
            low = mid + 1;
        } else {
            // mismatch found → go left
            high = mid - 1;
        }
    }
    return low + 1; // missing number
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 7};
    int n = 7; // numbers from 1..7
    cout << "Missing Number: " << findMissingBinary(arr, n);
}
