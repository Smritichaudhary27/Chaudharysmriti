#Write a program to overload + and - operator to find the sum of two numbers
using member function and friend function.

#include <iostream>
using namespace std;

class Number {
private:
    int a;

public:
    // Constructor to initialize the value of a
    Number(int val) : a(val) {}

    // Member function to overload the + operator (addition)
    Number operator+(const Number& other) {
        return Number(this->a + other.a);  // Sum of two numbers
    }

    // Member function to overload the - operator (subtraction)
    Number operator-(const Number& other) {
        return Number(this->a - other.a);  // Difference of two numbers
    }

    // Friend function to overload the + operator (addition)
    friend Number operator+(const Number& num1, const Number& num2);

    // Friend function to overload the - operator (subtraction)
    friend Number operator-(const Number& num1, const Number& num2);

    // Function to display the value of a
    void display() const {
        cout << "Value of a: " << a << endl;
    }
};

// Friend function to overload the + operator (addition)
Number operator+(const Number& num1, const Number& num2) {
    return Number(num1.a + num2.a);  // Sum of two numbers
}

// Friend function to overload the - operator (subtraction)
Number operator-(const Number& num1, const Number& num2) {
    return Number(num1.a - num2.a);  // Difference of two numbers
}

int main() {
    // Create two objects of class Number
    Number num1(10);
    Number num2(5);

    // Display the initial values
    cout << "Initial values: " << endl;
    cout << "Num1: ";
    num1.display();
    cout << "Num2: ";
    num2.display();

    // Using member function to overload + operator
    Number sum1 = num1 + num2;  // Using member function for addition
    cout << "Sum (using member function): ";
    sum1.display();

    // Using member function to overload - operator
    Number diff1 = num1 - num2;  // Using member function for subtraction
    cout << "Difference (using member function): ";
    diff1.display();

    // Using friend function to overload + operator
    Number sum2 = operator+(num1, num2);  // Using friend function for addition
    cout << "Sum (using friend function): ";
    sum2.display();

    // Using friend function to overload - operator
    Number diff2 = operator-(num1, num2);  // Using friend function for subtraction
    cout << "Difference (using friend function): ";
    diff2.display();

    return 0;
}
