//Multiple Inheritence
// Multiple inheritance occurs when a derived class inherits from more than one base class.

#include <iostream>
#include <string>
    using namespace std;

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

class Department
{
protected:
    string deptName;

public:
    Department(string name)
    {
        this->deptName = name;
        cout << "Department constructor called with name " << this->deptName << endl;
    }
};

class Manager : public Employee, public Department
{
public:
    Manager(int id, string name) : Employee(id), Department(name)
    {
        cout << "Manager constructor called" << endl;
    }

    void display()
    {
        cout << "Manager ID: " << this->empId
             << ", Department: " << this->deptName << endl;
    }
};

int main()
{
    Manager m(1001, "Sales");
    m.display();
    return 0;
}
