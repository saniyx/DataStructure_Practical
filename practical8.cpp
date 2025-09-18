//10. Insert an Element at a Specific Position in a 1D Array

#include <iostream>
using namespace std;

int main() {
    int arr[10], n, pos, val;
    cout << "Enter number of elements (max 9): ";
    cin >> n;
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter position to insert (0-based): ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> val;

    if(pos < 0 || pos > n || n >= 10) {
        cout << "Invalid position or array is full!";
        return 1;
    }

    for(int i = n; i > pos; i--)
        arr[i] = arr[i-1];
    arr[pos] = val;
    n++;
    cout << "Array after insertion: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}