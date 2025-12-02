#include <iostream>
using namespace std;
int main()
{
// Declares the integer variables
int arr[40], i = 0, n = 0, c9 = 0, c10 = 0;


    cout << "Input the number of grades (max 40):" << endl;
    cin >> n;

    // Checks if n < 40 and n <= 0
    if (n <= 0 || n > 40) {
        cout << "Invalid number of grades!" << endl;
        return 1;
    }

    cout << "Input all the grades:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == 9) {
            c9++;
        } else if (arr[i] == 10) {
            c10++;
        }
    }

    cout << "Number of grades of 9 is: " << c9 << endl;
    cout << "Number of grades of 10 is: " << c10 << endl;

    return 0;
}
