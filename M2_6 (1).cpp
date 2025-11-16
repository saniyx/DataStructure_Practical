// Write a program to implement circular queue operations.
#include <iostream>
#define MAX 5

class CircularQueue {
    int arr[MAX];
    int front, rear;

public:
    CircularQueue() : front(-1), rear(-1) {}

    bool isFull() {
        return (front == 0 && rear == MAX - 1) || (front == rear + 1);
    }

    bool isEmpty() {
        return front == -1;
    }

    void enqueue(int value) {
        if (isFull()) {
            std::cout << "Queue is full!\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else if (rear == MAX - 1)
            rear = 0;
        else
            rear++;
        arr[rear] = value;
        std::cout << "Inserted " << value << std::endl;
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty!\n";
            return;
        }
        std::cout << "Deleted " << arr[front] << std::endl;
        if (front == rear) {
            front = rear = -1;
        } else if (front == MAX - 1)
            front = 0;
        else
            front++;
    }

    void display() {
        if (isEmpty()) {
            std::cout << "Queue is empty!\n";
            return;
        }
        std::cout << "Queue elements: ";
        int i = front;
        while (true) {
            std::cout << arr[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % MAX;
        }
        std::cout << std::endl;
    }
};

int main() {
    CircularQueue q;
    int choice, value;
    do {
        std::cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter choice: ";
        std::cin >> choice;
        switch (choice) {
            case 1:
                std::cout << "Enter value to insert: ";
                std::cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            case 4:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice!\n";
        }
    } while (choice != 4);
    return 0;
}