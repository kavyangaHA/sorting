#include <iostream>
using namespace std;

// Function to heapify a subtree rooted at index 'i' in an array of size 'n'
void heapify(int arr[], int n, int i) {
    int largest = i;      // Assume the root (A[i]) is the largest
    int left = 2 * i + 1; // Left child index
    int right = 2 * i + 2; // Right child index

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than the largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root, swap and continue heapifying
    if (largest != i) {
        swap(arr[i], arr[largest]); // Swap root with the largest child
        heapify(arr, n, largest);   // Recursively fix the affected subtree
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver Code
int main() {
    int arr[] = {3, 1, 2, 1, 9, 5}; // Example heap (not necessarily valid)
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Heapify: ";
    printArray(arr, n);

    heapify(arr, n, 0); // Call heapify on root node

    cout << "After Heapify: ";
    printArray(arr, n);

    return 0;
}
