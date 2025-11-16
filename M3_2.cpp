// Write a program to insert a node at the beginning of a singly linked list.
#include <iostream>
using namespace std;

// Define a node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the beginning
void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node(); // Create a new node
    newNode->data = value;      // Set data
    newNode->next = head;       // Point to old head
    head = newNode;             // Update head to new node
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr; // Start with an empty list

    int n, value;
    cout << "How many nodes do you want to insert at the beginning? ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> value;
        insertAtBeginning(head, value);
        cout << "Current List: ";
        printList(head);
    }

    cout << "Final Linked List: ";
    printList(head);

    // Free memory
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}