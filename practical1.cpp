//1. Declare and Print Elements of a 1D Array of 5 Integers

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Array elements are as follows: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}