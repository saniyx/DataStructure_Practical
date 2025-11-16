#include <iostream>
#include <sstream>
#include <string>
using namespace std;

// Function to check if a string is a number
bool isNumber(const string& s) {
    if (s.empty()) return false;
    for (char c : s) {
        if (!isdigit(c)) return false;
    }
    return true;
}

// Simple stack implementation using array
class IntStack {
    int arr[100];
    int topIndex;
public:
    IntStack() : topIndex(-1) {}
    void push(int x) {
        if (topIndex < 99) arr[++topIndex] = x;
        else cout << "Stack overflow!" << endl;
    }
    void pop() {
        if (topIndex >= 0) --topIndex;
        else cout << "Stack underflow!" << endl;
    }
    int top() {
        if (topIndex >= 0) return arr[topIndex];
        else {
            cout << "Stack is empty!" << endl;
            return 0;
        }
    }
    int size() {
        return topIndex + 1;
    }
};

// Function to evaluate a postfix expression
int evaluatePostfix(const string& expr) {
    IntStack st;
    stringstream ss(expr);
    string token;

    while (ss >> token) {
        if (isNumber(token)) {
            st.push(stoi(token));
        } else {
            if (st.size() < 2) {
                cout << "Invalid expression!" << endl;
                return 0;
            }
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            int result = 0;
            if (token == "+") result = a + b;
            else if (token == "-") result = a - b;
            else if (token == "*") result = a * b;
            else if (token == "/") result = a / b;
            else {
                cout << "Unknown operator: " << token << endl;
                return 0;
            }
            st.push(result);
        }
    }
    if (st.size() != 1) {
        cout << "Invalid expression!" << endl;
        return 0;
    }
    return st.top();
}

int main() {
    string expr;
    cout << "Enter a postfix expression (tokens separated by spaces): ";
    getline(cin, expr);

    int result = evaluatePostfix(expr);
    cout << "Result: " << result << endl;

    return 0;
}