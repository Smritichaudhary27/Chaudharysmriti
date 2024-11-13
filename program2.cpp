Create a friend class to check if a number is prime or not.

#include <iostream>
using namespace std;

// Forward declaration of the PrimeTester class
class PrimeTester;

class PrimeChecker {
private:
    // Helper function to check if a number is prime
    bool isPrime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }

public:
    // Constructor
    PrimeChecker() {}

    // Declare PrimeTester as a friend class
    friend class PrimeTester;
};

// PrimeTester class that uses PrimeChecker's private method
class PrimeTester {
public:
    // Function to check if a number is prime using PrimeChecker's private method
    bool checkPrime(int num, PrimeChecker& checker) {
        return checker.isPrime(num);
    }
};

int main() {
    PrimeChecker checker;
    PrimeTester tester;
    int number;

    // Ask the user for a number
    cout << "Enter a number to check if it's prime: ";
    cin >> number;

    // Check if the number is prime
    if (tester.checkPrime(number, checker)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;