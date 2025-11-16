//Element-wise Addition of Two 1D Arrays

#include <iostream>
using namespace std;

int main() {
    int a[5], b[5], sum[5];
    cout << "enter 5 element for first array: ";
    for(int i = 0; i < 5; i++) cin >> a[i];
    cout << "enter 5 elements for second aray: ";
    for(int i = 0; i < 5; i++) cin >> b[i];
    
    for(int i = 0; i < 5; i++)
        sum[i] = a[i] + b[i];

    cout << "element-wise sum  : ";
    for(int i = 0; i < 5; i++)
        cout << sum[i] << " ";
    return 0;
}
