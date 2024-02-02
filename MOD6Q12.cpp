/* Q.12 Write a program of to swap the two values using templates */

#include <iostream>
using namespace std;

// Template function to swap two values
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int int1 = 5, int2 = 10;
    cout << "Before swapping:" << endl;
    cout << "int1 = " << int1 << ", int2 = " << int2 << endl;

    // Swap integers
    swapValues(int1, int2);

    cout << "After swapping:" << endl;
    cout << "int1 = " << int1 << ", int2 = " << int2 << endl;

    double double1 = 3.5, double2 = 7.8;
    cout << "\nBefore swapping:" << endl;
    cout << "double1 = " << double1 << ", double2 = " << double2 << endl;

    // Swap doubles
    swapValues(double1, double2);

    cout << "After swapping:" << endl;
    cout << "double1 = " << double1 << ", double2 = " << double2 << endl;

    return 0;
}

