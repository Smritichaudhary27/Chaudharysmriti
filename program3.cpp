#Create a friend function to display student details in student class and class 
containing data members are name, age, department, course.
#include <iostream>
#include <string>
using namespace std;

class Student {
    // Declare the data members as private
    private:
        string name;
        int age;
        string department;
        string course;

    // Declare a friend function that can access private members
    friend void displayStudentDetails(const Student& student);

    public:
        // Constructor to initialize student details
        Student(string n, int a, string d, string c) : name(n), age(a), department(d), course(c) {}

        // Getter functions to retrieve private data members (optional)
        string getName() const { return name; }
        int getAge() const { return age; }
        string getDepartment() const { return department; }
        string getCourse() const { return course; }
};

// Friend function definition
void displayStudentDetails(const Student& student) {
    // Accessing private members of Student class
    cout << "Student Details:" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Department: " << student.department << endl;
    cout << "Course: " << student.course << endl;
}

int main() {
    // Creating a Student object
    Student student1("John Doe", 20, "Computer Science", "Data Structures");

    // Calling the friend function to display student details
    displayStudentDetails(student1);

    return 0;
}
    