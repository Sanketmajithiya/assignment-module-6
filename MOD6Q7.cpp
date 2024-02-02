/* Q.7 Assume a class cricketer is declared. Declare a derived class batsman from cricketer .Data member of
batsman. Total runs, Average runs and best performance. Member functions input data, calculate
average runs, Display data. (Single Inheritance)*/


#include <iostream>
#include <string>

class Cricketer {
protected:
    std::string playerName;
    int age;

public:
    void InputData() {
        std::cout << "Enter player name: ";
        std::cin >> playerName;
        std::cout << "Enter player age: ";
        std::cin >> age;
    }

    void DisplayData() {
        std::cout << "Player Name: " << playerName << std::endl;
        std::cout << "Player Age: " << age << std::endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

public:
    void InputData() {
        Cricketer::InputData(); // Call base class input function
        std::cout << "Enter total runs: ";
        std::cin >> totalRuns;
        std::cout << "Enter best performance: ";
        std::cin >> bestPerformance;
    }

    void CalculateAverageRuns() {
        // You can add more sophisticated logic for average calculation
        averageRuns = static_cast<float>(totalRuns) / 10;
    }

    void DisplayData() {
        Cricketer::DisplayData(); // Call base class display function
        std::cout << "Total Runs: " << totalRuns << std::endl;
        std::cout << "Average Runs: " << averageRuns << std::endl;
        std::cout << "Best Performance: " << bestPerformance << std::endl;
    }
};

int main() {
    Batsman batsman;

    // Input data for batsman
    batsman.InputData();

    // Calculate average runs
    batsman.CalculateAverageRuns();

    // Display batsman data
    batsman.DisplayData();

    return 0;
}
