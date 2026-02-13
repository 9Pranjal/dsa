#include<iostream>
using namespace std;

int size;
int front = -1;
int rear = -1;

int main() {

    cout << "enter the size of queue: ";
    cin >> size;

    int queue[size]; 
    int choice, value;

    do {
        cout << "\n1. enqueue element";
        cout << "\n2. dequeue element";
        cout << "\n3. display elements";
        cout << "\n4.exit";
        cout << "\nenter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1: 
                if(rear == size - 1) {
                    cout << "queue overflow!\n";
                }
                else {
                    if(front == -1)
                        front = 0;

                    cout << "enter value to enqueue: ";
                    cin >> value;

                    rear++;
                    queue[rear] = value;

                    cout << "element inserted successfully.\n";
                }
                break;

            case 2: 
                if(front == -1 || front > rear) {
                    cout << "queue underflow!\n";
                }
                else {
                    cout << "deleted element: " << queue[front] << endl;
                    front++;
                }
                break;

            case 3:
                if(front == -1 || front > rear) {
                    cout << "queue is empty.\n";
                }
                else {
                    cout << "queue elements are:\n";
                    for(int i = front; i <= rear; i++) {
                        cout << queue[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 4:
                cout << "exiting program...\n";
                break;

            default:
                cout << "invalid choice!\n";
        }

    } while(choice != 4);

    return 0;
}
