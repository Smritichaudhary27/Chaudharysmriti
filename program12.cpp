#Write a program to create a template for structures and implement students'
data with name, age, course and department.

#include <iostream>
#include <string>
using namespace std;

// Define a structure template for Student
template <typename T1, typename T2, typename T3, typename T4>
struct Student {
    T1 name;         // Name of the student (can be string)
    T2 age;          // Age of the student (can be int)
    T3 course;       // Course of the student (can be string)
    T4 department;   // Department of the student (can be string)

    // Constructor to initialize student data
    Student(T1 n, T2 a, T3 c, T4 d) : name(n), age(a), course(c), department(d) {}

    // Function to display student data
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    // Create a student object with string for name, int for age, string for course, and string for department
    Student<string, int, string, string> student1("Alice", 20, "Computer Science", "Engineering");
    
    // Create another student object with string for name, int for age, string for course, and string for department
    Student<string, int, string, string> student2("Bob", 22, "Electrical Engineering", "Engineering");

    // Display student data
    cout << "Student 1 Data:" << endl;
    student1.display();
    cout << endl;
    
    cout << "Student 2 Data:" << endl;
    student2.display();

    return 0;
}