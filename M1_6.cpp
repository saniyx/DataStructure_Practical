//8. Count Even and Odd Numbers in an Array

#include <iostream>
using namespace std;

int main() {
    int arr[10], even = 0, odd = 0;
    cout << "Enter 10 numbers: ";
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        if(arr[i] % 2 == 0) even++;
        else odd++;
    }
    cout << "Even: " << even << "\nOdd: " << odd;
    return 0;
}
