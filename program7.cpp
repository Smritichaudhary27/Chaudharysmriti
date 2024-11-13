#Find the sum of three numbers with the help of function overriding. Display sum of base class with the help of derived class object and vice versa

#include <iostream>
using namespace std;

// Base class
class Base {
public:
    // Function to calculate the sum of three numbers in base class
    virtual int sum(int a, int b, int c) {
        return a + b + c;  // Sum in base class
    }
};

// Derived class that overrides the sum function of the base class
class Derived : public Base {
public:
    // Overridden function in derived class to calculate the sum of three numbers
    int sum(int a, int b, int c) override {
        return (a + b + c) * 2;  // Sum in derived class (just an example, multiplying the sum by 2)
    }
};

int main() {
    int num1, num2, num3;

    // Create objects of Base and Derived class
    Base* basePtr;
    Derived derivedObj;

    // Input three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Using the Base class object (via pointer) to display the sum
    basePtr = &derivedObj;  // Base pointer pointing to Derived object
    cout << "Sum using Base class function (via Derived object): " << basePtr->sum(num1, num2, num3) << endl;

    // Using the Derived class object to display the sum
    cout << "Sum using Derived class function: " << derivedObj.sum(num1, num2, num3) << endl;

    return 0;
}
