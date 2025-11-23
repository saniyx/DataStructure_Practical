// 6. Write a program to search for a node in a BST.
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
};
// Create a new node
Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
// Insert a node in BST
Node* insert(Node* root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}
// Search a node in the BST
Node* search(Node* root, int key) {
    if (root == NULL || root->data == key)
        return root;

    if (key < root->data)
        return search(root->left, key);

    return search(root->right, key);
}
int main() {
    Node* root = NULL;
    int n, value, key;

    cout << "How many nodes do you want to insert? ";
    cin >> n;
    cout << "Enter values:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        root = insert(root, value);
    }
    cout << "Enter value to search: ";
    cin >> key;

    Node* result = search(root, key);

    if (result != NULL)
        cout << "Node " << key << " found in the BST.\n";
    else
        cout << "Node " << key << " NOT found in the BST.\n";

    return 0;
}
