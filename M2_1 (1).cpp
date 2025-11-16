// Write a program to implement a stack using arrays (push and pop).
#include <iostream>
using namespace std;

#define MAX 100

class Stack {
    int top;
    int arr[MAX];

public:
    Stack() { top = -1; }

    bool push(int x) {
        if (top >= (MAX - 1)) {
            cout << "Stack Overflow\n";
            return false;
        } else {
            arr[++top] = x;
            return true;
        }
    }

    int pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return -1;
        } else {
            return arr[top--];
        }
    }

    bool isEmpty() {
        return (top < 0);
    }

    int peek() {
        if (top < 0) {
            cout << "Stack is empty\n";
            return -1;
        } else {
            return arr[top];
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Top element is: " << s.peek() << endl;
    cout << "Popped element is: " << s.pop() << endl;
    cout << "Top element is: " << s.peek() << endl;
    return 0;
}