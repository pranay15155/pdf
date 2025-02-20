//base class ->public
// inherited class->protected

#include <bits/stdc++.h>
using namespace std;

class human
{
public:
    int height;
    int weight;
    int age;

    int getAge()
    {
        return this->age;
    }
    void setWeight(int weight)
    {
        this->weight = weight;
    }
};

class male : protected human
{
public:
    string color;

    void sleep()
    {
        cout << "male is sleeping" << endl;
    }

    // Public functions to access the inherited (now protected) members.
    void setHeight(int h)
    {
        height = h;
    }
    int getHeight()
    {
        return height;
    }

    void setAge(int a)
    {
        age = a;
    }
    int getAge()
    {
        return age;
    }

    // Optionally, you can provide a function to set the color, or use direct access since 'color' is public.
};

int main()
{
    male object1;

    // With protected inheritance, we cannot access human's members directly:
    // object1.age; // ERROR: 'age' is inaccessible
    // Instead, we use the public member functions provided by male.
    object1.setAge(25);
    object1.setHeight(180);
    // object1.setWeight(155); // setWeight() is inherited from human but now is protected,
    // however, since it is not accessible from main, you might want to provide a wrapper.
    object1.color = "Brown";

    cout << "Age: " << object1.getAge() << endl;
    cout << "Height: " << object1.getHeight() << endl;
    // If needed, you can similarly add a getWeight() in male.
    // For demonstration, let's add a wrapper function to get weight:
    // (You can uncomment the following function in the male class if you want to use it.)
    // int getWeight() { return weight; }
    // Then in main: cout << "Weight: " << object1.getWeight() << endl;

    cout << "Color: " << object1.color << endl;

    object1.sleep();

    return 0;
}
