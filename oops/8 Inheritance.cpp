#include <bits/stdc++.h>
using namespace std;

class human
{

public:
    int height;
    int weight;
    int age;

    int getage()
    {
        return this->age;
    }
    void setweight(int weight)
    {
        this->weight = weight;
    }
};

class male : public human
{
public:
    string color;
    void sleep()
    {
        cout << "male is sleeping" << endl;
    }
};

int main()
{

    male object1;
    cout << object1.age << endl;
    cout << object1.height << endl;
    cout << object1.weight << endl;
    cout << object1.color << endl;
    // properties like age,weight,height are inherited from human class
    object1.sleep();

    object1.setweight(155);
    cout << object1.weight << endl;

    return 0;
}

// Inheritance allows us to create a new class (derived class) from an existing class (base class).
// The derived class inherits the features from the base class and can have additional features of its own.

// Base Class   Public           Protected          Private

// Public        Public           Protected          Private
// Protected     Protected        Protected          Private
// Private       Not accessible   Not accessible     Not accessible
