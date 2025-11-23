// 4. 

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

void postorder(Node* root) {
    if (root == NULL)
        return;

    postorder(root->left);     // Visit left subtree
    postorder(root->right);    // Visit right subtree
    cout << root->data << " "; // Visit root
}

int main() {
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    cout << "Post-order Traversal: ";
    postorder(root);

    return 0;
}
