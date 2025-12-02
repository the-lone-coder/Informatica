#include <iostream>
using namespace std;

int main() {
    int arr[100], arrb[100], arrc[100];
    int i, n, j, k, minn;

    cin >> n;

    // Input array values
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize indexers for arrb and arrc arrays
    int bCount = 0, cCount = 0;

    // Separate positive and negative numbers into arrb and arrc respectively
    for (i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arrb[bCount++] = arr[i];  // negative numbers array
        } else {
            arrc[cCount++] = arr[i];  // non-negative numbers array
        }
    }

    // Bubble sort arrc array (non-negative numbers) in ascending order
    for (i = 0; i < cCount - 1; i++) {
        for (j = 0; j < cCount - i - 1; j++) {
            if (arrc[j] > arrc[j + 1]) {
                swap(arrc[j], arrc[j + 1]);
            }
        }
    }

    // Selection sort arrb array (negative numbers) in descending order
    for (i = 0; i < bCount - 1; i++) {
        k = i;
        for (j = i + 1; j < bCount; j++) {
            if (arrb[j] > arrb[k]) {
                k = j;
            }
        }
        if (k != i) {
            swap(arrb[i], arrb[k]);
        }
    }

    // Output the sorted arrays as example
    cout << "Negative numbers sorted descending: "<<endl;
    for (i = 0; i < bCount; i++) {
        cout << arrb[i] << " ";
    }
    cout << "Non-negative numbers sorted ascending: ";
    for (i = 0; i < cCount; i++) {
        cout << arrc[i] << " ";
    }
    cout << endl;

    return 0;
}
