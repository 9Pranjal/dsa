#include <iostream>
using namespace std;

int main() {
    int n, key, comparisons = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    int position = -1;

    for (int i = 0; i < n; i++) {
        comparisons++;
        if (arr[i] == key) {
            position = i + 1;
            break;
        }
    }

    if (position != -1)
        cout << "Element found at position: " << position << endl;
    else
        cout << "Element not found.\n";

    cout << "Number of comparisons made: " << comparisons << endl;

    return 0;
}
