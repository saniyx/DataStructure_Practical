//Write a program to perform element-wise addition of two 1D arrays.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of arrays: ";
    cin >> n;

    int arr1[n], arr2[n], sum[n];

    cout << "Enter elements of first array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter elements of second array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    // Element-wise addition
    for (int i = 0; i < n; i++) {
        sum[i] = arr1[i] + arr2[i];
    }

    cout << "Resultant array after addition: ";
    for (int i = 0; i < n; i++) {
        cout << sum[i] << " ";
    }
    cout << endl;

    return 0;
}
