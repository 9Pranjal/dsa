#include<iostream>
using namespace std;


int main(){
    
    cout << "enter the size of stack: ";
    cin >> size;

    int stack[size];   

    int choice, value

    do{
       cout << "\n1. push element";
        cout << "\n2. pop element";
        cout << "\n3. display element";
        cout << "\n4. exit";
        cout << "\nenter your choice: ";
        cin >> choice;

        switch(choice){
            case 1 : 
                  if(top == size - 1) {
                    cout << "stack overflow\n";
                }
                else {
                    cout << "enter value to push: ";
                    cin >> value;
                    top++;
                    stack[top] = value;
                    cout << "element pushed successfully\n";
                }
            break;
                
            case 2: 
                if(top == -1) {
                    cout << "stack underflow\n";
                }
                else {
                    cout << "popped element: " << stack[top] << endl;
                    top--;
                }
            break;

            break;
            case 3: 
                if(top == -1) {
                    cout << "stack is empty\n";
                }
                else {
                    cout << "stack elements are:\n";
                    for(int i = top; i >= 0; i--) {
                        cout << stack[i] << endl;
                    }
                }
            break;

            case 4: 
                 cout << "exiting\n";
            break;

            default: 
                 cout << "invalid choice\n";
            break;
        }
    }while(choice != 4)
}

