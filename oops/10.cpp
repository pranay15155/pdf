// base class ->protected
//  inherited class->public

#include <iostream>
#include <string>
using namespace std;

// Base class with protected members
class Human
{
protected:
    int height;
    int weight;

public:
    // Default constructor
    Human()
    {
        this->height = 0;
        this->weight = 0;
    }

    // Parameterized constructor using the 'this' keyword explicitly
    Human(int h, int w)
    {
        this->height = h; // Assign parameter h to the member height
        this->weight = w; // Assign parameter w to the member weight
    }

    // A public member function of the base class to display information
    void displayInfo()
    {
        cout << "Height: " << this->height << " cm" << endl;
        cout << "Weight: " << this->weight << " kg" << endl;
    }
};

// Derived class that inherits publicly from Human
class Male : public Human
{
public:
    string color;

    // Constructor that initializes both the Human part and the Male part
    // Here we do not use an initializer list; instead, we assign values inside the constructor body.
    Male(int h, int w, string c)
    {
        // In C++, the protected access specifier allows a member to be accessible not only within its own class but also by any class that inherits from it. This means that even though height and weight are declared as protected in the Human class, the Male class—being a derived class—has direct access to them.
        this->height = h;
        this->weight = w;

        // Assign the derived class member.
        this->color = c;
    }

    // A public function that uses the protected members from Human
    void showDetails()
    {
        // Directly accessing the protected members 'height' and 'weight'
        cout << "Male Details:" << endl;
        cout << "Height: " << this->height << " cm" << endl;
        cout << "Weight: " << this->weight << " kg" << endl;
        cout << "Color: " << this->color << endl;
    }
};

int main()
{
    // Create an object of the derived class Male with explicit assignments via constructors
    Male m(180, 75, "Brown");

    // Accessing the public member function of the base class
    m.displayInfo();

    // Accessing the public member function of the derived class
    m.showDetails();

    // Note: Direct access to 'height' and 'weight' is not allowed here since they are protected.
    // For example, the following lines would result in errors:
    // cout << m.height << endl;
    // cout << m.weight << endl;

    return 0;
}
