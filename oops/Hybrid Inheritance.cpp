//  Hybrid Inheritance
// Hybrid inheritance is a combination of two or more types of inheritance. For example, combining multiple and hierarchical inheritance.

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
        this->name = name;
        cout << "Person constructor called for " << this->name << endl;
    }
};

class Employee
{
protected:
    int empId;

public:
    Employee(int id)
    {
        this->empId = id;
        cout << "Employee constructor called with ID " << this->empId << endl;
    }
};

class Worker : public Person, public Employee
{
public:
    Worker(string name, int id) : Person(name), Employee(id)
    {
        cout << "Worker constructor called" << endl;
    }

    void display()
    {
        cout << "Worker Name: " << this->name << ", Employee ID: " << this->empId << endl;
    }
};

class Manager : public Worker
{
private:
    string dept;

public:
    Manager(string name, int id, string dept) : Worker(name, id)
    {
        this->dept = dept;
        cout << "Manager constructor called for department " << this->dept << endl;
    }

    void display()
    {
        cout << "Manager Name: " << this->name << ", Employee ID: " << this->empId
             << ", Department: " << this->dept << endl;
    }
};

int main()
{
    Manager m("John Doe", 1234, "Finance");
    m.display();
    return 0;
}
