//2. Input 10 Numbers in an Array and Display Them

#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cout << "please enter 10 numbers: ";
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    cout << "Array elements: ";
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}