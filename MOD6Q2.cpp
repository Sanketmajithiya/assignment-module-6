//Q.2 define a class to represent lecture details. Include the following members and the program should
//handle at least details of 5 lecturer.
//Data members : Name of the lecturer Name of the subject Name of course Number of lecturers
//Data functions: To assign initial values To add a lecture details To display name and lecture
//details


#include <iostream>
#include <string>

class LectureDetails {
private:
    std::string lecturerName;
    std::string subjectName;
    std::string courseName;
    int numOfLectures;

public:
    // Member function to assign initial values
    void assignInitialValues(const std::string& name, const std::string& subject, const std::string& course, int num) {
        lecturerName = name;
        subjectName = subject;
        courseName = course;
        numOfLectures = num;
    }

    // Member function to add lecture details
    void addLectureDetails(const std::string& subject, int num) {
        subjectName = subject;
        numOfLectures = num;
    }

    // Member function to display name and lecture details
    void display() const {
        std::cout << "Lecturer Name: " << lecturerName << std::endl;
        std::cout << "Subject Name: " << subjectName << std::endl;
        std::cout << "Course Name: " << courseName << std::endl;
        std::cout << "Number of Lectures: " << numOfLectures << std::endl;
        std::cout << std::endl;
    }
};

int main() {
    // Create an array of LectureDetails to store details of 5 lecturers
    LectureDetails lecturers[5];

    // Assign initial values for each lecturer
    lecturers[0].assignInitialValues("SANKET", "Introduction to Programming", "Computer Science", 10);
    lecturers[1].assignInitialValues("DEEPAK", "Data Structures", "Computer Science", 15);
    lecturers[2].assignInitialValues("JAY", "Linear Algebra", "Mathematics", 12);
    lecturers[3].assignInitialValues("BHAVDIP", "Organic Chemistry", "Chemistry", 8);
    lecturers[4].assignInitialValues("VIJAY", "Microeconomics", "Economics", 20);

    // Display details of all lecturers
    for (int i = 0; i < 5; ++i) {
        std::cout << "Lecturer Details #" << i + 1 << std::endl;
        lecturers[i].display();
    }

    // Add lecture details for the first lecturer
    lecturers[0].addLectureDetails("Advanced Programming", 12);

    // Display updated details of the first lecturer
    std::cout << "Updated Lecturer Details #1" << std::endl;
    lecturers[0].display();

    return 0;
}
