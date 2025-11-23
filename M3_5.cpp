//5. Write a program to delete a node from the end of a singly linked list.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertEnd(int x) {
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void deleteEnd() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    // Case: only one node
    if (head->next == NULL) {
        cout << head->data << " deleted\n";
        delete head;
        head = NULL;
        return;
    }

    // Case: more than one node
    Node* temp = head;
    Node* prev = NULL;

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    cout << temp->data << " deleted\n";
    delete temp;
    prev->next = NULL;
}

void display() {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    cout << "Linked List: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);

    display();

    deleteEnd();
    display();

    deleteEnd();
    display();

    deleteEnd();
    display();

    return 0;
}
