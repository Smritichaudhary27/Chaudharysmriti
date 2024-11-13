#Create a friend class for three classes A, B and C. Create private and protected data members in class A, B and C. Access all the private and protected data with the help of friend class. (Note : in friend class, you can create single function for all classes or separate function for all classes
#include <iostream>
#include <string>

using namespace std;

// Forward declaration of FriendClass
class FriendClass;

// Class A
class A {
private:
    int a_private;
protected:
    string a_protected;
public:
    A(int priv, string prot) : a_private(priv), a_protected(prot) {}
    friend class FriendClass;  // Declare FriendClass as a friend
};

// Class B
class B {
private:
    float b_private;
protected:
    double b_protected;
public:
    B(float priv, double prot) : b_private(priv), b_protected(prot) {}
    friend class FriendClass;  // Declare FriendClass as a friend
};

// Class C
class C {
private:
    char c_private;
protected:
    bool c_protected;
public:
    C(char priv, bool prot) : c_private(priv), c_protected(prot) {}
    friend class FriendClass;  // Declare FriendClass as a friend
};

// Friend class that can access private and protected members of A, B, and C
class FriendClass {
public:
    // Function to display the private and protected data of class A, B, and C
    void displayData(const A& a, const B& b, const C& c) {
        cout << "Accessing private and protected data through FriendClass:" << endl;

        // Accessing A's private and protected data
        cout << "Class A - Private: " << a.a_private << ", Protected: " << a.a_protected << endl;

        // Accessing B's private and protected data
        cout << "Class B - Private: " << b.b_private << ", Protected: " << b.b_protected << endl;

        // Accessing C's private and protected data
        cout << "Class C - Private: " << c.c_private << ", Protected: " << c.c_protected << endl;
    }
};

int main() {
    // Create objects of classes A, B, and C
    A a(10, "Class A");
    B b(3.14f, 2.718);
    C c('Z', true);

    // Create FriendClass object to access private and protected data
    FriendClass friendObj;

    // Call the display function to show data
    friendObj.displayData(a, b, c);

    return 0;
}
