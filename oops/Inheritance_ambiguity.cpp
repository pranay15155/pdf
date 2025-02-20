#include <iostream>
using namespace std;

// First base class with a member variable 'value'
class Base1
{
public:
    int value;
    Base1()
    {
        value = 10;
    }
};

// Second base class with a member variable 'value'
class Base2
{
public:
    int value;
    Base2()
    {
        value = 20;
    }
};

// Derived class inherits from both Base1 and Base2.
class Derived : public Base1, public Base2
{
public:
    void show()
    {
        // Ambiguity: simply writing "value" would cause an error because
        // both Base1 and Base2 have a member named "value".
        // To resolve, use the scope resolution operator:
        cout << "Base1 value: " << Base1::value << endl;
        cout << "Base2 value: " << Base2::value << endl;
    }
};

int main()
{
    Derived d;
    d.show();
    return 0;
}
