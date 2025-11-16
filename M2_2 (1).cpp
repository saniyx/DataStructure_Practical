// Write a program to display top element of a stack without removing it.
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    // Push some elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);

    if (!s.empty()) {
        cout << "Top element of the stack: " << s.top() << endl;
    } else {
        cout << "Stack is empty." << endl;
    }

    return 0;
}