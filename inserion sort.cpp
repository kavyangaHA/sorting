//inserion sort

#include <bits/stdc++.h>

using namespace std;
void insertionSort1(int n, vector<int> arr) {
    int lastValue=arr[n-1];
    int i;

    // move elements to the right if they are greater than lastValue
    for (i = n - 2; i >= 0 && arr[i] > lastValue; i--) {
        arr[i + 1] = arr[i]; // Move element to the right

        // Print the array after we did each shift
        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
    }

    arr[i + 1] = lastValue; // place lastValue at it's correct position

    // Print the final (sorted) array
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}