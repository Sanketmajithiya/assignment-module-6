/* Q 13 Create a example of use delete and new operator*/

#include <iostream>
using namespace std;

int main() {
    // Dynamic memory allocation using new operator
    int *ptr = new int; // Allocates memory for a single integer
    *ptr = 5; // Assigns a value to the dynamically allocated memory

    cout << "Value stored in dynamically allocated memory: " << *ptr << endl;

    // Deallocate memory using delete operator
    delete ptr;
    ptr = nullptr; // Reset pointer to nullptr after deallocation

    // Dynamic memory allocation for an array using new operator
    int size = 5;
    int *arr = new int[size]; // Allocates memory for an array of integers

    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i]; // Input values into the dynamically allocated array
    }

    cout << "You entered:\n";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " "; // Output values from the dynamically allocated array
    }
    cout << endl;

    // Deallocate memory for the array using delete[] operator
    delete[] arr;
    arr = nullptr; // Reset pointer to nullptr after deallocation

    return 0;
}

