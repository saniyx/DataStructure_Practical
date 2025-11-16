// Write a program to check if a stack is empty or full.
#include <iostream>
using namespace std;

#define MAX 100

class Stack {
    int arr[MAX];
    int top;
public:
    Stack() { top = -1; }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX - 1;
    }

    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }
};

int main() {
    Stack s;
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Is stack full? " << (s.isFull() ? "Yes" : "No") << endl;
    cout << "Top element is: " << s.peek() << endl;
    cout << "Popped element is: " << s.pop() << endl;
    cout << "Top element is: " << s.peek() << endl;
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;
    return 0;
}
