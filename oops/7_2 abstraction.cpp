#include <iostream>
using namespace std;

class Car
{
public:
    void startCar()
    {
        startIgnition();
        injectFuel();
        cout << "Car Started!" << endl;
    }

private:
    void startIgnition() { cout << "Ignition Started" << endl; }
    void injectFuel() { cout << "Fuel Injected" << endl; }
};

int main()
{
    Car myCar;
    myCar.startCar(); // User doesn't need to know internal implementation
    return 0;
}
