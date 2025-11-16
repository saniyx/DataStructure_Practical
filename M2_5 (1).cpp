// Write a program to display front and rear elements of a queue.
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int n, val;

    cout << "Enter number of elements to enqueue: ";
    cin >> n;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> val;
        q.push(val);
    }

    if (!q.empty()) {
        cout << "Front element: " << q.front() << endl;
        cout << "Rear element: " << q.back() << endl;
    } else {
        cout << "Queue is empty.\n";
    }

    return 0;
}