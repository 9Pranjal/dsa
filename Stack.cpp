//Stack Implementation 
// Write a C++ program to:
// Implement Stack using Array
// Perform the following operations using menu:
// Push
// Pop
// Display
// Exit

#include <iostream>
using namespace std;

#define MAX 5

int stackArr[MAX];
int top = -1;

// Push operation
void push(int value) {
    if (top == MAX - 1) {
        cout << "Stack Overflow! Cannot insert element.\n";
        return;
    }
    stackArr[++top] = value;
    cout << "Element inserted successfully.\n";
}

// Pop operation
void pop() {
    if (top == -1) {
        cout << "Stack Underflow! Stack is empty.\n";
        return;
    }
    cout << "Deleted element: " << stackArr[top--] << endl;
}

// Display operation
void display() {
    if (top == -1) {
        cout << "Stack is empty.\n";
        return;
    }
    cout << "Stack elements are:\n";
    for (int i = top; i >= 0; i--)
        cout << stackArr[i] << endl;
}

int main() {
    int choice, value;

    do {
        cout << "\n1.Push\n2.Pop\n3.Display\n4.Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}
