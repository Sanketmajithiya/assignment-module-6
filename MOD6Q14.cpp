/*Q. 14  Write a program of to sort the array using templates. */


#include <iostream>

template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int intArr[] = {5, 2, 8, 1, 3};
    double doubleArr[] = {5.5, 2.2, 8.8, 1.1, 3.3};
    
    int intSize = sizeof(intArr) / sizeof(int);
    int doubleSize = sizeof(doubleArr) / sizeof(double);

    std::cout << "Original integer array: ";
    printArray(intArr, intSize);
    bubbleSort(intArr, intSize);
    std::cout << "Sorted integer array: ";
    printArray(intArr, intSize);

    std::cout << "Original double array: ";
    printArray(doubleArr, doubleSize);
    bubbleSort(doubleArr, doubleSize);
    std::cout << "Sorted double array: ";
    printArray(doubleArr, doubleSize);

    return 0;
}
