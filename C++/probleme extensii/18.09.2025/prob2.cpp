#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int i, n, j, x, y;

    cout << "Please input how many numbers would you like to add to the array" << endl;
    cin >> n;

    cout << "Please input the values of your array" << endl;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Please input a value that you want added to the array" << endl;
    cin >> y;

    // Add y to the end of the array and update size
    arr[n] = y;
    n++;

    // Insertion sort
    for (i = 1; i < n; i++) {
        x = arr[i];
        j = i - 1;

        while (j >= 0 && x < arr[j]) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = x;
    }

    // Output sorted array
    cout << "Sorted array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
