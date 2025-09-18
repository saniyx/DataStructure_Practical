//3. Find Sum of All Elements in a 1D Array

#include <iostream>
using namespace std;

int main() {
    int arr[5], sum = 0;
    cout << "enter 5 numbers: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum: " << sum;
    return 0;
}