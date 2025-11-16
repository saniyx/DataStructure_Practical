#include <iostream>
using namespace std;

// Node structure for singly linked list
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the end (for testing)
void insertEnd(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr};
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr)
        temp = temp->next;
    temp->next = newNode;
}

// Function to delete a node from the beginning
void deleteBeginning(Node*& head) {
    if (head == nullptr) {
        cout << "List is already empty.\n";
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    cout << "Node deleted from the beginning.\n";
}

// Function to display the list
void display(Node* head) {
    if (head == nullptr) {
        cout << "List is empty.\n";
        return;
    }
    Node* temp = head;
    cout << "Linked List: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Insert some nodes for demonstration
    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);

    cout << "Before deletion:\n";
    display(head);

    // Delete node from beginning
    deleteBeginning(head);

    cout << "After deletion:\n";
    display(head);

    // Clean up remaining nodes
    while (head != nullptr)
        deleteBeginning(head);

    return 0;
}