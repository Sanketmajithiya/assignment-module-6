// Q.6 Write a program of to concatenate the two strings using Operator Overloading .

#include <iostream>
#include <cstring>

class ConcatenatedString {
private:
    char* concatenatedStr;

public:
    // Constructor to initialize the object with an empty string
    ConcatenatedString() : concatenatedStr(nullptr) {}

    // Destructor to free the dynamically allocated memory
    ~ConcatenatedString() {
        delete[] concatenatedStr;
    }

    // Overloaded addition operator to concatenate two strings
    ConcatenatedString operator+(const ConcatenatedString& other) const {
        ConcatenatedString result;

        // Calculate the length of the concatenated string
        int resultLength = (concatenatedStr ? strlen(concatenatedStr) : 0) + (other.concatenatedStr ? strlen(other.concatenatedStr) : 0);

        // Allocate memory for the concatenated string
        result.concatenatedStr = new char[resultLength + 1];

        // Copy the first string into the result
        if (concatenatedStr) {
            strcpy(result.concatenatedStr, concatenatedStr);
        }

        // Concatenate the second string
        if (other.concatenatedStr) {
            strcat(result.concatenatedStr, other.concatenatedStr);
        }

        return result;
    }

    // Function to set the value of the concatenated string
    void setValue(const char* str) {
        // Free existing memory before setting new value
        delete[] concatenatedStr;

        // Allocate memory for the new string
        concatenatedStr = new char[strlen(str) + 1];

        // Copy the string into the object
        strcpy(concatenatedStr, str);
    }

    // Function to display the concatenated string
    void display() const {
        std::cout << "Concatenated String: " << (concatenatedStr ? concatenatedStr : "") << std::endl;
    }
};

int main() {
    ConcatenatedString str1, str2, result;

    // Set values for the first and second strings
    str1.setValue("Hello, ");
    str2.setValue("world!");

    // Concatenate strings using operator overloading
    result = str1 + str2;

    // Display original strings and the result
    str1.display();
    str2.display();

    std::cout << "\nAfter Concatenation:" << std::endl;
    result.display();

    return 0;
}
