// 1. Write a program to create a simple binary tree and display root, left and right nodes.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to create a new node
Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int main() {


    int rootValue, leftValue, rightValue;

    cout << "Enter root value: ";
    cin >> rootValue;

    cout << "Enter left child value: ";
    cin >> leftValue;

    cout << "Enter right child value: ";
    cin >> rightValue;

    Node* root = createNode(rootValue);
    root->left = createNode(leftValue);
    root->right = createNode(rightValue);

    // Display the nodes
    cout << "Nodes: " << root->data << " " << root->left->data << " " << root->right->data << endl;

    return 0;
}

