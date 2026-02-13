#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

int main() {

    int choice, value;

    do {
        cout << "\n1. insert at Beginning";
        cout << "\n2. insert at End";
        cout << "\n3. delete from Beginning";
        cout << "\n4. display";
        cout << "\n5. exit";
        cout << "\nenter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1: {   
                Node* newNode = new Node();
                cout << "enter value: ";
                cin >> value;

                newNode->data = value;
                newNode->next = head;
                head = newNode;

                cout << "inserted at beginning\n";
                break;
            }

            case 2: {   
                Node* newNode = new Node();
                cout << "enter value: ";
                cin >> value;

                newNode->data = value;
                newNode->next = NULL;

                if(head == NULL) {
                    head = newNode;
                }
                else {
                    Node* temp = head;
                    while(temp->next != NULL) {
                        temp = temp->next;
                    }
                    temp->next = newNode;
                }

                cout << "inserted at end\n";
                break;
            }

            case 3: {   
                if(head == NULL) {
                    cout << "list is empty\n";
                }
                else {
                    Node* temp = head;
                    cout << "deleted element: " << head->data << endl;
                    head = head->next;
                    delete temp;
                }
                break;
            }

            case 4: {   
                if(head == NULL) {
                    cout << "list is empty\n";
                }
                else {
                    Node* temp = head;
                    cout << "linked List: ";
                    while(temp != NULL) {
                        cout << temp->data << " -> ";
                        temp = temp->next;
                    }
                    cout << "NULL\n";
                }
                break;
            }

            case 5:
                cout << "exiting\n";
                break;

            default:
                cout << "invalid choice\n";
        }

    } while(choice != 5);

    return 0;
}
