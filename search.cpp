#include<iostream>
using namespace std;

int main() {

    int n, key;
    int comp=0;

    cout << "enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "enter element to search: ";
    cin >> key;

    int position = -1;

    for(int i = 0; i < n; i++) {
        comp++

        if(arr[i] == key) {
            position = i + 1;  
            break;
        }
    }

    if(position != -1) {
        cout << "element found at position: " << position << endl;
    }
    else {
        cout << "element not found\n";
    }

    cout << "number of comparisons made: " << comparisons << endl;

    return 0;
}
