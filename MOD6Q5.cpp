// Q.5 Write a Program of Two 1D Matrix Addition using Operator Overloading .

#include <iostream>

class Matrix {
private:
    int size;
    int* data;

public:
    // Constructor to initialize the matrix with given size
    Matrix(int s) : size(s), data(new int[s]) {}

    // Destructor to free the dynamically allocated memory
    ~Matrix() {
        delete[] data;
    }

    // Overloaded addition operator to add two matrices
    Matrix operator+(const Matrix& other) const {
        if (size != other.size) {
            std::cerr << "Error: Matrices must have the same size for addition." << std::endl;
            exit(EXIT_FAILURE);
        }

        Matrix result(size);

        for (int i = 0; i < size; ++i) {
            result.data[i] = data[i] + other.data[i];
        }

        return result;
    }

    // Function to input values into the matrix
    void inputValues() {
        std::cout << "Enter values for the matrix:" << std::endl;
        for (int i = 0; i < size; ++i) {
            std::cout << "Element " << i + 1 << ": ";
            std::cin >> data[i];
        }
    }

    // Function to display the matrix
    void display() const {
        std::cout << "Matrix:" << std::endl;
        for (int i = 0; i < size; ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    int size;

    // Input size for matrices
    std::cout << "Enter the size of the matrices: ";
    std::cin >> size;

    // Create two matrices
    Matrix matrix1(size);
    Matrix matrix2(size);

    // Input values for the matrices
    std::cout << "\nEnter values for Matrix 1:" << std::endl;
    matrix1.inputValues();

    std::cout << "\nEnter values for Matrix 2:" << std::endl;
    matrix2.inputValues();

    // Perform matrix addition using operator overloading
    Matrix resultMatrix = matrix1 + matrix2;

    // Display matrices and the result
    std::cout << "\nMatrix 1:" << std::endl;
    matrix1.display();

    std::cout << "\nMatrix 2:" << std::endl;
    matrix2.display();

    std::cout << "\nResult Matrix (Matrix1 + Matrix2):" << std::endl;
    resultMatrix.display();

    return 0;
}
