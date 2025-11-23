// 7. Write a program to find the minimum and maximum element in a BST.
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
// Find minimum value node
Node* findMin(Node* root) {
    if (root == NULL) return NULL;

    while (root->left != NULL)
        root = root->left;
    return root;
}
// Find maximum value node
Node* findMax(Node* root) {
    if (root == NULL) return NULL;

    while (root->right != NULL)
        root = root->right;
    return root;
}
int main() {
    Node* root = NULL;
    int n, value;
    cout << "How many nodes do you want to insert? ";
    cin >> n;
    cout << "Enter values:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        root = insert(root, value);
    }
    Node* minNode = findMin(root);
    Node* maxNode = findMax(root);
    if (minNode != NULL)
        cout << "Minimum value in BST: " << minNode->data << endl;
    if (maxNode != NULL)
        cout << "Maximum value in BST: " << maxNode->data << endl;
    return 0;
}
