#include <iostream>
#include <cstring> // for strcpy and strlen
using namespace std;

class hero
{
public:
    char *name;
    int health;
    char section;

    // Parameterized constructor: allocates memory and copies the given name.
    hero(const char *n, int h, char s)
    {
        cout << "Parameterized constructor called" << endl;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        health = h;
        section = s;
    }

    // Default (shallow) copy constructor is provided by the compiler.
    // It will copy the pointer value (i.e. perform a shallow copy).

    // Overloaded deep copy constructor.
    // The extra 'deepCopy' parameter distinguishes this from the default copy constructor.
    hero(const hero &temp, bool deepCopy)
    {
        if (deepCopy)
        {
            cout << "Deep copy constructor called" << endl;
            // Allocate new memory and copy the contents to perform a deep copy.
            name = new char[strlen(temp.name) + 1];
            strcpy(name, temp.name);
        }
        else
        {
            cout << "Shallow copy constructor called" << endl;
            // Perform a shallow copy (just copy the pointer).
            name = temp.name;
        }
        health = temp.health;
        section = temp.section;
    }

    // Destructor: free the allocated memory.
    ~hero()
    {
        cout << "destructor called" << endl;
        delete[] name;
    }

    // Print function to display hero details.
    void print()
    {
        cout << "Name: " << name << ", Health: " << health << ", Section: " << section << endl;
    }
};

int main()
{
    // Create an object using the parameterized constructor.
    hero h1("Pranay", 100, 'A');

    // Use the default copy constructor (shallow copy) to create h2 as a copy of h1.
    hero h2 = h1;

    // Create h3 using our overloaded deep copy constructor.
    hero h3(h1, true);

    cout << "\nAfter creating h2 (shallow copy) and h3 (deep copy):" << endl;
    h1.print(); // Expected: Pranay 100 A
    h2.print(); // Expected: Pranay 100 A (shallow copy shares the same memory as h1)
    h3.print(); // Expected: Pranay 100 A (deep copy has its own copy of the name)

    // Modify the name in h1's allocated memory using strcpy.
    // This modification will affect h2 because it is a shallow copy,
    // but h3 remains unchanged because it holds a deep copy.
    strcpy(h1.name, "Prasoon");

    cout << "\nAfter modifying h1's name:" << endl;
    h1.print(); // Expected: Prasoon 100 A
    h2.print(); // Expected: Prasoon 100 A (affected by change due to shallow copy)
    h3.print(); // Expected: Pranay 100 A (remains unchanged due to deep copy)

    return 0;
}
// Using a raw pointer (char*) instead of std::string in this example is intentional for demonstration purposes. Here's why:

// Demonstrating Shallow Copy Behavior:

// Raw Pointers (char*):
// When you use a raw pointer as a data member, the compiler-generated default copy constructor performs a shallow copy. That means it copies the pointer value (the memory address) without allocating new memory or copying the contents. As a result, if you modify the contents of the memory via one object, the change is reflected in any other object that holds a copy of that pointer.

// This behavior is exactly what the example is intended to illustrate—how a shallow copy works when using raw pointers.

// std::string:
// The std::string class is designed to manage its own memory. Its copy constructor performs a deep copy, meaning it allocates new memory and copies the actual content of the string. Therefore, if you copy an object that contains a std::string, each object will have its own separate copy of the string data. This behavior hides the shallow copy issue, so it wouldn’t be as clear when trying to demonstrate the difference.





// default constructor do shallow copy

// COPY ASSIGNMENT OPERATOR
// a = b
// if a and b are two objects than all properties of a will be
// equal to all properties of b

// for those objects created by static allocation destructor
//  are called for themselves automatically


//for dynamically allocated objects destructors must be called manually

//how is constant keyword used in object creation?
//concept of initialization list

//learn about static member
//static function can only access static member


