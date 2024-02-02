 /*Q.8 Create a class person having members name and age. Derive a class student having member
percentage. Derive another class teacher having member salary. Write necessary member function to
initialize, read and write data. Write also Main function (Multiple Inheritance)*/


#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    void Initialize() {
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter age: ";
        std::cin >> age;
    }

    void DisplayData() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Student : public Person {
private:
    float percentage;

public:
    void ReadData() {
        Person::Initialize(); // Call base class function
        std::cout << "Enter percentage: ";
        std::cin >> percentage;
    }

    void DisplayData() {
        Person::DisplayData(); // Call base class function
        std::cout << "Percentage: " << percentage << "%" << std::endl;
    }
};

class Teacher : public Person {
private:
    float salary;

public:
    void ReadData() {
        Person::Initialize(); // Call base class function
        std::cout << "Enter salary: ";
        std::cin >> salary;
    }

    void DisplayData() {
        Person::DisplayData(); // Call base class function
        std::cout << "Salary: $" << salary << std::endl;
    }
};

int main() {
    Student student;
    Teacher teacher;

    // Input and display student data
    std::cout << "Enter student details:" << std::endl;
    student.ReadData();
    std::cout << "\nStudent Details:" << std::endl;
    student.DisplayData();

    std::cout << "\n----------------\n";

    // Input and display teacher data
    std::cout << "Enter teacher details:" << std::endl;
    teacher.ReadData();
    std::cout << "\nTeacher Details:" << std::endl;
    teacher.DisplayData();

    return 0;
}
