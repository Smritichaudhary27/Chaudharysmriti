#Write a program to overload increment operator to increment value of a by 5,
decrement operator to decrement value of a by 1, negation operator to change
the value of a from -ve to +ve and +ve to -ve using member function and friend
function.

#include <iostream>
using namespace std;

class Number {
private:
    int a;

public:
    // Constructor to initialize the value of a
    Number(int val) : a(val) {}

    // Member function to overload the increment operator (++)
    Number operator++() {
        a += 5;  // Increment a by 5
        return *this;
    }

    // Member function to overload the decrement operator (--)
    Number operator--() {
        a -= 1;  // Decrement a by 1
        return *this;
    }

    // Friend function to overload the negation operator (-)
    friend Number operator-(Number& obj);

    // Function to display the value of a
    void display() const {
        cout << "Value of a: " << a << endl;
    }
};

// Friend function to change the sign of the number
Number operator-(Number& obj) {
    obj.a = -obj.a;  // Negate the value of a
    return obj;
}

int main() {
    // Create an object of class Number
    Number num(10);

    // Display the initial value of a
    cout << "Initial ";
    num.display();

    // Overload increment operator (++) to increment by 5
    ++num;
    cout << "After increment by 5: ";
    num.display();

    // Overload decrement operator (--) to decrement by 1
    --num;
    cout << "After decrement by 1: ";
    num.display();

    // Overload negation operator (-) to change the sign of a
    -num;
    cout << "After negation (sign change): ";
    num.display();

    return 0;
}
