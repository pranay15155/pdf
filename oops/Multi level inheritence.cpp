//Multi level inheritence
// Multilevel inheritance is when a class is derived from a class that is already derived from another class(grandparent → parent → child).



#include <iostream>
#include <string>
    using namespace std;

class Animal
{
protected:
    string species;

public:
    Animal(string species)
    {
        this->species = species;
        cout << "Animal constructor called: " << this->species << endl;
    }
};

class Mammal : public Animal
{
protected:
    string furColor; // New member variable for Mammal
public:
    // Mammal constructor now accepts species and furColor.
    Mammal(string species, string furColor) : Animal(species)
    {
        this->furColor = furColor;
        cout << "Mammal constructor called with fur color: " << this->furColor << endl;
    }
};

class Dog : public Mammal
{
private:
    string name;

public:
    // Dog constructor accepts species, furColor, and name.
    Dog(string species, string furColor, string name) : Mammal(species, furColor)
    {
        this->name = name;
        cout << "Dog constructor called for " << this->name << endl;
    }

    void display()
    {
        cout << "Species: " << this->species
             << ", Fur Color: " << this->furColor
             << ", Name: " << this->name << endl;
    }
};

int main()
{
    // Now we pass an extra argument for furColor.
    Dog d("Canine", "Brown", "tom");
    d.display();
    return 0;
}
