// 2. Write a program to perform in-order traversal of a binary tree.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// In-order Traversal
void inorder(Node* root) {
    if (root == NULL)
        return;

    inorder(root->left);       // Visit left subtree
    cout << root->data << " "; // Visit root
    inorder(root->right);      // Visit right subtree
}

int main() {
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    cout << "In-order Traversal: ";
    inorder(root);

    return 0;
}
