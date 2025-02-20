// Single Inheritance
// Definition:
// Single inheritance is when a derived (child) class inherits from one base (parent) class.

#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;

public:
    Person(string name)
    {
        // Using 'this' to set the data member
        this->name = name;
        cout << "Person constructor called for " << this->name << endl;
    }
};

class Student : public Person
{
private:
    int rollNumber;

public:
    Student(string name, int rollNumber) : Person(name)
    {
        this->rollNumber = rollNumber;
        cout << "Student constructor called for " << this->name
             << " with roll number " << this->rollNumber << endl;
    }

    void display()
    {
        cout << "Name: " << this->name << ", Roll Number: " << this->rollNumber << endl;
    }
};

int main()
{
    Student s("Alice", 101);
    s.display();
    return 0;
}



// Here's why the constructor is written as:

// Student(string name, int rollNumber) : Person(name)

// What Would Happen Without the Initializer List
// If you didn't use the initializer list like this:


// Student(string name, int rollNumber)
// {
//     // Attempt to assign directly in the constructor body:
//     this->name = name;  // This may work if 'name' is accessible,
//                         // but it happens after the Person constructor.
//     this->rollNumber = rollNumber;
// }


// The Person default constructor would be called automatically before the body of the Student constructor.


// However, if Person doesn't have a default constructor (or if you want to initialize it with a specific value), this approach would cause a compilation error or leave name uninitialized until you assign it later.

// Moreover, assigning this->name = name; in the constructor body doesn't construct the Person part properly. It's better and more efficient to initialize it directly using the base class constructor in the initializer list.