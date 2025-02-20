// Hierarchical Inheritance

// Hierarchical inheritance is when multiple classes are derived from a single base class.

#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    string brand;

public:
    Vehicle(string brand)
    {
        this->brand = brand;
        cout << "Vehicle constructor called for " << this->brand << endl;
    }
};

class Car : public Vehicle
{
private:
    string model;

public:
    Car(string brand, string model) : Vehicle(brand)
    {
        this->model = model;
        cout << "Car constructor called for " << this->brand << " " << this->model << endl;
    }

    void display()
    {
        cout << "Car: " << this->brand << " " << this->model << endl;
    }
};

class Motorcycle : public Vehicle
{
private:
    string type;

public:
    Motorcycle(string brand, string type) : Vehicle(brand)
    {
        this->type = type;
        cout << "Motorcycle constructor called for " << this->brand << " " << this->type << endl;
    }

    void display()
    {
        cout << "Motorcycle: " << this->brand << " " << this->type << endl;
    }
};

int main()
{
    Car c("Toyota", "Corolla");
    Motorcycle m("Harley-Davidson", "Cruiser");
    c.display();
    m.display();
    return 0;
}
