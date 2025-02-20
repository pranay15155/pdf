// Protected Members
// Definition:
// A member declared as protected in a base class is accessible:

// Within the base class itself.
// Within any class that inherits from the base class (regardless of the type of inheritance).
// Not accessible from outside these classes (e.g., by an object in main()).

// Inheritance Behavior:
// When a class inherits from a base class, it gains direct access to the base class’s protected members. This means that in the derived class, you can use these members directly.

// Example:

#include <bits/stdc++.h>>
using namespace std;

class Base
{
protected:
    int protectedValue;

public:
    Base(int val) { this->protectedValue = val; }
};

class Derived : public Base
{
public:
    Derived(int val) : Base(val) {}
    void display()
    {
        // Direct access to protectedValue is allowed
        cout << "Protected Value: " << this->protectedValue << endl;
    }
};

// Private Members
// Definition:
// A member declared as private in a base class is accessible:

// Only within the base class itself.
// Not accessible directly in any derived classes.
// Even though private members are inherited by derived classes, they cannot be accessed directly by those derived classes.

// Inheritance Behavior:
// When a class inherits from a base class, it inherits the private members, but those members are not accessible by name in the derived class. If you need to work with these members in a derived class, you typically use public or protected member functions (such as getters or setters) provided by the base class

// Example :

class Base
{
private:
    int privateValue;

public:
    Base(int val) { this->privateValue = val; }
    // Public accessor to privateValue
    int getPrivateValue() { return this->privateValue; }
};

class Derived : public Base
{
public:
    Derived(int val) : Base(val) {}
    void display()
    {
        // Cannot access privateValue directly here.
        // Instead, use the public accessor:
        cout << "Private Value via accessor: " << getPrivateValue() << endl;
    }
};