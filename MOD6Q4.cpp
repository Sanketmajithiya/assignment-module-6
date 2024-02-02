// Q.4 Write a program to find the multiplication values and the cubic values using inline function .

#include <iostream>

// Inline function to find multiplication of two numbers
inline int multiply(int a, int b) {
    return a * b;
}

// Inline function to find cubic value of a number
inline int cubic(int x) {
    return x * x * x;
}

int main() {
    int num1, num2;

    // Input two numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Calculate and display the multiplication
    int multiplicationResult = multiply(num1, num2);
    std::cout << "Multiplication of " << num1 << " and " << num2 << " is: " << multiplicationResult << std::endl;

    // Input a number for cubic calculation
    std::cout << "\nEnter a number for cubic calculation: ";
    std::cin >> num1;

    // Calculate and display the cubic value
    int cubicResult = cubic(num1);
    std::cout << "Cubic value of " << num1 << " is: " << cubicResult << std::endl;

    return 0;
}
