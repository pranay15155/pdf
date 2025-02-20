// Abstraction is the concept of hiding the complex details of how something works and only showing the essential features.It lets you interact with objects using a simple interface without needing to know all the inner workings.

#include <iostream>
using namespace std;

// Abstract class representing an Animal
class Animal
{
public:
    // Pure virtual function: each animal must implement its own speak() method.
    virtual void speak() = 0;
};

class Dog : public Animal
{
public:
    // Override the speak() method for Dog.
    void speak() override
    {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal
{
public:
    // Override the speak() method for Cat.
    void speak() override
    {
        cout << "Meow!" << endl;
    }
};

int main()
{
    // Statically allocate objects of derived classes
    Dog dog;
    Cat cat;

    // Use pointers of type Animal* to refer to the statically allocated objects.
    Animal *animal1 = &dog;
    Animal *animal2 = &cat;

    // Call the speak() function.
    animal1->speak(); // Outputs: Woof!
    animal2->speak(); // Outputs: Meow!

    return 0;
}

// The example indeed demonstrates polymorphism, but it also embodies abstraction. Here’s how:

// Abstraction in the Example
// Abstraction is about defining an interface that hides the details of implementation. In this example, the abstract class Animal declares a pure virtual function:

// virtual void speak() = 0;
// This line specifies what behavior all animals should have (i.e., they must be able to "speak"), but it doesn't specify how they speak. The details of speaking are hidden from the user of the Animal interface.

// The class Animal serves as a blueprint or contract for derived classes. It tells us that every animal must implement the speak() method, but it leaves the actual implementation to the derived classes (Dog, Cat, etc.). This is abstraction: hiding the details (the implementation of speak()) while exposing a clear interface.

// Polymorphism : When you call speak() on an Animal *pointer, the program dynamically determines(at runtime) which speak() method to execute.This is the polymorphic behavior that results from having a common abstract interface.