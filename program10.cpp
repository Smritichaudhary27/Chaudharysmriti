#Write a program to create a template for functions and implement function 
overloading.

#include <iostream>
using namespace std;

// Template function for addition (generic)
template <typename T>
T add(T a, T b) {
    return a + b;
}

// Overloaded template function for addition (for three parameters)
template <typename T>
T add(T a, T b, T c) {
    return a + b + c;
}

// Function to demonstrate addition of integers
int add(int a, int b) {
    return a + b;
}

// Function to demonstrate addition of floating point numbers
float add(float a, float b) {
    return a + b;
}

int main() {
    // Using the generic template function (for two integers)
    int intResult = add(10, 20);
    cout << "Sum of integers (using template): " << intResult << endl;

    // Using the generic template function (for two floats)
    float floatResult = add(10.5f, 20.5f);
    cout << "Sum of floats (using template): " << floatResult << endl;

    // Using the overloaded template function (for three integers)
    int intTripleSum = add(10, 20, 30);
    cout << "Sum of three integers (using overloaded template): " << intTripleSum << endl;

    // Using the overloaded template function (for three floats)
    float floatTripleSum = add(10.5f, 20.5f, 30.5f);
    cout << "Sum of three floats (using overloaded template): " << floatTripleSum << endl;

    // Using the overloaded int add function
    int sumInt = add(100, 200);
    cout << "Sum of integers (using overloaded function): " << sumInt << endl;

    // Using the overloaded float add function
    float sumFloat = add(100.5f, 200.5f);
    cout << "Sum of floats (using overloaded function): " << sumFloat << endl;

    return 0;
}

