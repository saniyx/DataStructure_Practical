// Write a program to convert infix expression to postfix expression (basic).
#include <iostream>
using namespace std;

// Simple stack implementation for char
class CharStack {
    char arr[100];
    int topIdx;
public:
    CharStack() : topIdx(-1) {}
    void push(char c) { arr[++topIdx] = c; }
    void pop() { if(topIdx >= 0) --topIdx; }
    char top() { return arr[topIdx]; }
    bool empty() { return topIdx == -1; }
};

// Check if character is alphanumeric
bool isAlnum(char ch) {
    return (ch >= '0' && ch <= '9') ||
           (ch >= 'A' && ch <= 'Z') ||
           (ch >= 'a' && ch <= 'z');
}

// Operator precedence
int precedence(char op) {
    if(op == '^') return 3;
    if(op == '*' || op == '/') return 2;
    if(op == '+' || op == '-') return 1;
    return 0;
}

// Infix to postfix conversion
string infixToPostfix(string infix) {
    CharStack st;
    string postfix = "";
    for(char ch : infix) {
        if(isAlnum(ch)) {
            postfix += ch;
        }
        else if(ch == '(') {
            st.push(ch);
        }
        else if(ch == ')') {
            while(!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            if(!st.empty()) st.pop(); // pop '('
        }
        else { // operator
            while(!st.empty() && precedence(st.top()) >= precedence(ch)) {
                postfix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while(!st.empty()) {
        postfix += st.top();
        st.pop();
    }
    return postfix;
}

int main() {
    string infix;
    cout << "Enter infix expression: ";
    cin >> infix;
    string postfix = infixToPostfix(infix);
    cout << "Postfix expression: " << postfix << endl;
    return 0;
}