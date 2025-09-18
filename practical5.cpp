//Reverse the Elements of a 1D Array

#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout << "eter 5 numbers: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    cout << "reversed array: ";
    for(int i = 4; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    return 0;
}