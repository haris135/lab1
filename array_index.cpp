#include <iostream>
using namespace std;

void findIndices(int arr[], int n, int key) {
    int indices[10]; 
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            indices[count] = i;
            count++;
        }
    }

    if (count == 0) {
        cout << "Key " << key << " not found in the array." << endl;
    } else {
        cout << "Key " << key << " found at indices: ";
        for (int i = 0; i < count; i++) {
            cout << indices[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    const int SIZE = 10;
    int arr[SIZE];
    int n, key;

    // Step 1: Ask how many elements user wants to enter
    cout << "Enter number of elements (0 to 10): ";
    cin >> n;

    if (n == 0) {
        cout << "Array is empty. Nothing to search." << endl;
        return 0;
    }

    if (n > SIZE) {
        cout << "You can only enter up to 10 elements." << endl;
        return 0;
    }

    // Step 2: Input elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 3: Input key
    cout << "Enter key to search: ";
    cin >> key;

    // Step 4: Call function
    findIndices(arr, n, key);

    return 0;
}
