// Polymorphism

// Compile Time Polymorphism has 2 types -
//1. function overloading 
//2. operator overloading


//function overloading examples

#include <iostream>
using namespace std;

class Calculator
{
public:
    // Overloaded function: takes two integers, returns an integer.
    int add(int a, int b)
    {
        return a + b;
    }

    // Overloaded function: takes two doubles, returns a double.
    double add(double a, double b)
    {
        return a + b;
    }

    // Overloaded function: takes three integers, returns an integer.
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main()
{
    Calculator calc;

    // Calling the version that takes two integers.
    int sumInt = calc.add(10, 20);
    cout << "Sum of 10 and 20 (int): " << sumInt << endl;

    // Calling the version that takes two doubles.
    double sumDouble = calc.add(10.5, 20.5);
    cout << "Sum of 10.5 and 20.5 (double): " << sumDouble << endl;

    // Calling the version that takes three integers.
    int sumThree = calc.add(1, 2, 3);
    cout << "Sum of 1, 2, and 3 (int): " << sumThree << endl;

    return 0;
}
