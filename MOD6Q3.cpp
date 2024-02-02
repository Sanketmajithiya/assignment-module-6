//Q.3 Write a program of find the simple interest using constructor with dynamic initialization. Make
//constructor like Interest (int principal, int year, int rate) Interest (int principal, int year, float rate = 2.5) 

#include <iostream>
#include <iomanip>

class Interest {
private:
    int principal;
    int year;
    float rate;

public:
    // Constructor with integer rate
    Interest(int p, int y, int r) : principal(p), year(y), rate(static_cast<float>(r) / 100) {}

    // Constructor with default float rate
    Interest(int p, int y, float r = 2.5) : principal(p), year(y), rate(r / 100) {}

    // Function to calculate simple interest
    float calculateSimpleInterest() const {
        return principal * rate * year;
    }

    // Function to display details
    void display() const {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Principal Amount: " << principal << std::endl;
        std::cout << "Number of Years: " << year << std::endl;
        std::cout << "Rate of Interest: " << rate * 100 << "%" << std::endl;
        std::cout << "Simple Interest: " << calculateSimpleInterest() << std::endl;
    }
};

int main() {
    // Create instances of Interest using different constructors
    Interest interest1(1000, 2, 5);
    Interest interest2(1500, 3);

    // Display details
    std::cout << "Interest 1 Details:" << std::endl;
    interest1.display();

    std::cout << "\nInterest 2 Details:" << std::endl;
    interest2.display();

    return 0;
}
